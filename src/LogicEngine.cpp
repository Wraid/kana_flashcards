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
    std::uniform_int_distribution<long unsigned int> distribution(0, selected_deck.size());

    // main processing loop
    while (true)
        {
        // no sense in processing when the user hasn't even entered anything
        // Also, we don't want to get in the middle of the logic loop and have
        //     the user enter something. Oh the problems of multithreading.
        //     My life is so hard.
        while (!transaction.userWaiting()){};

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
            transaction.setUserWaiting(false);
            }
        // if the user is waiting on a response
        else if ("" != transaction.getUserInput())
            {
            assert("" != transaction.getUserInput());
            // if user answered correctly
            if (0 == transaction.getUserInput().compare(transaction.getSelectedCard().getTranslation()))
                {
                transaction.setResponse(Transaction::CORRECT);

                if (transaction.firstTry())
                    transaction.incrementNumberCorrect();
                }
            // and if they didn't
            else
                {
                transaction.setResponse(Transaction::INCORRECT);
                transaction.setFirstTry(false);
                transaction.incrementNumberIncorrect();
                }

            transaction.setUserWaiting(false);
            }
        }
    }

LogicEngine::~LogicEngine(){}

