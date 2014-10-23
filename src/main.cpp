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
#include "FlashcardDecks.h"
#include "ConfigurationObject.h"

int main()
    {
    std::cout << "Kana Flashcards v0.01" << std::endl << "Copyright: Stuart Will 2014" << std::endl << std::endl;

    // shared object to hold all possible flashcards
    FlashcardDecks flashcard_decks;

    // shared object to hold selected flashcards
    FlashcardDeck selected_deck ("selected_deck");

    // shared object to hold randomly selected flashcard
    Flashcard selected_card("","");


    // create primary threads
    std::thread configuration_thread ([&]() {ConfigurationObject configurationObject(flashcard_decks);});
    std::thread graphical_thread ([&]() {GraphicalEngine graphical(flashcard_decks, selected_deck, selected_card);});
    std::thread logic_thread ([]() {LogicEngine logic;});

    // wait until all threads finish before exiting
    configuration_thread.join();
    graphical_thread.join();
    logic_thread.join();

    std::cout << "Symbol: " << flashcard_decks.getDeck("katakana").getSymbol("a") << "  Translation: " << flashcard_decks.at(0).at(0).getTranslation() << std::endl;

    return 0;
    }
