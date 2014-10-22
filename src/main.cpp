/**
 * Name        : main.cpp
 * Author      : Stuart Will
 * Version     : 0.01
 * Copyright   : 2014 Stuart Will
 * Description : Main loop. Creates alpha flashcard container and configurable,
 *               GUI, and Logic Engine object threads.
 */

#include <iostream>
#include <thread>
#include <vector>

#include "GraphicalEngine.h"
#include "LogicEngine.h"
#include "Flashcard.h"
#include "FlashcardDeck.h"
#include "FlashcardDecks.h"
#include "ConfigurationObject.h"

int main()
    {
    std::cout << "Kana Flashcards v0.01" << std::endl << "Copyright: Stuart Will 2014" << std::endl << std::endl;

    // object to hold all possible flashcards
    FlashcardDecks flashcard_decks;

    // create primary threads
    std::thread configurationThread ([&flashcard_decks]() {ConfigurationObject configurationObject(flashcard_decks);});
    std::thread graphicalThread ([]() {GraphicalEngine graphical;});
    std::thread logicThread ([]() {LogicEngine logic;});

    // wait until all threads finish before exiting
    configurationThread.join();
    graphicalThread.join();
    logicThread.join();

    std::cout << "Symbol: " << flashcard_decks.getDeck("katakana").getSymbol("a") << "  Translation: " << flashcard_decks.at(0).at(0).getTranslation() << std::endl;

    return 0;
    }
