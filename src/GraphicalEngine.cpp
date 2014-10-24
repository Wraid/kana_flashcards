/**
 * Name        : GraphicalEngine.cpp
 * Author      : Stuart Will
 * Version     : 0.01
 * Copyright   : 2014 Stuart Will
 * Description : See GraphicalEngine.h
 */

#include <iostream>
#include <thread>

#include "GraphicalEngine.h"

GraphicalEngine::GraphicalEngine(const FlashcardDecks &flashcard_decks, FlashcardDeck &selected_deck, Transaction &transaction)
    {
    std::string user_input;

    std::thread selected_deck_thread(&GraphicalEngine::getSelectedDeck, this, std::ref(flashcard_decks), std::ref(selected_deck));

    std::cout << "Type in the English translation for each symbol." << std::endl;
    std::cout << "Type 'q' to exit."<< std::endl;

    selected_deck_thread.join();

    while (true)
        {
        while (transaction.getSelectedCard().isEmpty()) {}

        std::cout << transaction.getSelectedCard().getSymbol() << std::endl;

        std::cin >> user_input;
        transaction.setUserInput(user_input);

        if (user_input == "q")
            {
            transaction.setExit(true);
            break;
            }

        transaction.resetSelectedCard();
        }
//        if logic_engine::selected_deck is ready
//            grab random symbol from logic_engine::selected_deck
//            wait for user input
//            send input to logic_engine for evaluation
//            if wrong
//                print out "try again"
//            else
//                print out "correct"
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

