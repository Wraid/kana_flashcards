/**
 * Name        : LogicEngine.cpp
 * Author      : Stuart Will
 * Copyright   : 2014 Stuart Will
 * Description : See LogicEngine.h
 */

#include <thread>
#include <random>
#include <cmath>
#include <cassert>

#include "LogicEngine.h"

LogicEngine::LogicEngine(const FlashcardDeck &selected_deck, Transaction &transaction)
    {
    // create random number generator
    static thread_local std::random_device rd;
    static thread_local std::mt19937 generator(rd());
    while (!selected_deck.isReady()) {} // wait for deck to finish being built
    std::uniform_int_distribution<int> distribution(0, selected_deck.size());

    // main processing loop
    while (true)
        {
        // if the user wants to quit
        if (transaction.exit())
            {
            assert(true == transaction.exit());
            break;
            }
        // if the user is waiting on a new card
        else if (transaction.getSelectedCard().isEmpty())
            {
            assert(transaction.getSelectedCard().isEmpty());
            transaction.setSelectedCard(selected_deck.at(distribution(generator)));
            }
        // if the user is waiting on a response
        else if ("" != transaction.getUserInput())
            {
            assert("" != transaction.getUserInput());
            // if user answered correctly
            if (0 == transaction.getUserInput().compare(transaction.getSelectedCard().getTranslation()))
                {
                transaction.setResponse(Transaction::CORRECT);
                }
            // and if they didn't
            else
                {
                transaction.setResponse(Transaction::INCORRECT);
                }
            }
        }
    }

LogicEngine::~LogicEngine(){}

