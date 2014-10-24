/**
 * Name        : LogicEngine.cpp
 * Author      : Stuart Will
 * Version     : 0.01
 * Copyright   : 2014 Stuart Will
 * Description : See LogicEngine.h
 */

#include <iostream>
#include <thread>
#include <random>
#include <cmath>

#include "LogicEngine.h"

LogicEngine::LogicEngine(const FlashcardDeck &selected_deck, Transaction &transaction)
    {
    // create random number generator
    static thread_local std::random_device rd;
    static thread_local std::mt19937 generator(rd());
    while (!selected_deck.isReady()) {} // wait for deck to finish being built
    std::uniform_int_distribution<int> distribution(0, selected_deck.size());

    while (true)
        {
        if (transaction.exit())
            {
            break;
            }
        else if (transaction.getSelectedCard().isEmpty())
            {
            transaction.setSelectedCard(selected_deck.at(distribution(generator)));
            }
        else if (!transaction.getUserInput().empty())
            {
//            if (transaction.getUserInput().compare(transaction.getSelectedCard().getTranslation())) // if user answered correctly
//                transaction.setAnswer(Transaction::CORRECT);
//            else // and if they didn't
//                transaction.setAnswer(Transaction::INCORRECT);
            }
        }
    }

LogicEngine::~LogicEngine(){}

