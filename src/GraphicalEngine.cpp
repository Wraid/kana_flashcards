/**
 * Name        : GraphicalEngine.cpp
 * Author      : Stuart Will
 * Copyright   : 2014 Stuart Will
 * Description : See GraphicalEngine.h
 */

#include <iostream>
#include <thread>

#include "GraphicalEngine.h"

GraphicalEngine::GraphicalEngine(const FlashcardDecks &flashcard_decks, FlashcardDeck &selected_deck, Transaction &transaction)
    {
    std::string user_input;

    // build the user's chosen deck in a separate thread
    std::thread selected_deck_thread(&GraphicalEngine::getSelectedDeck, this, std::ref(flashcard_decks), std::ref(selected_deck));

    std::cout << "Type in the English translation for each symbol." << std::endl;
    std::cout << "Type 'q' to exit."<< std::endl;

    // wait for the build thread here
    // unfinished thread could cause problems
    selected_deck_thread.join();

    // primary graphical loop
    while (!transaction.exit())
        {
        // wait for logic engine to pick a flashcard
        while (transaction.getSelectedCard().isEmpty()) {}

        // user transaction loop
        while (true)
            {
            std::cout << transaction.getSelectedCard().getSymbol() << std::endl;

            std::cin >> user_input;
            transaction.setUserInput(user_input);

            // user wants to quit
            if (user_input == "q")
                {
                transaction.setExit(true);
                break;
                }

            // wait for logic engine to generate response
            while (Transaction::BLANK == transaction.getResponse()){}

            if (Transaction::CORRECT == transaction.getResponse())
                {
                std::cout << "Correct" << std::endl << std::endl;
                transaction.resetSelectedCard();
                break;
                }
            else if (Transaction::INCORRECT == transaction.getResponse())
                {
                std::cout << "Try Again" << std::endl;
                transaction.setResponse(Transaction::BLANK);
                }
            }
        }
    }

void GraphicalEngine::getSelectedDeck(const FlashcardDecks &flashcard_decks, FlashcardDeck &selected_deck)
    {
    while (!flashcard_decks.isReady()){}

    for (auto deck : flashcard_decks)
        {
        for (auto flashcard : deck)
            {
            selected_deck.push_back(flashcard);
            }
        }

    selected_deck.setReady(true);
    }

GraphicalEngine::~GraphicalEngine(){}

