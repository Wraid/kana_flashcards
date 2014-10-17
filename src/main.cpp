/**
 * Name        : main.cpp
 * Author      : Stuart Will
 * Version     : 0.01
 * Copyright   : 2014 Stuart Will
 * Description : Main loop. Creates GUI and Logic Engine objects.
 */

#include <iostream>
#include <thread>
#include <vector>

#include "GraphicalEngine.h"
#include "LogicEngine.h"
#include "Flashcard.h"
#include "ConfigurationObject.h"

int main()
    {
    std::cout << "Kana Flashcards v0.01" << std::endl << "Copyright: Stuart Will 2014" << std::endl << std::endl;

    std::vector<Flashcard> flashcards;
    ConfigurationObject configurationObject(flashcards);
    std::cout << "Symbol: " << flashcards.at(0).getSymbol() << "  Translation: " << flashcards.at(0).getTranslation() << std::endl;

    std::thread graphicalThread ([]() {GraphicalEngine graphical;});
    std::thread logicThread ([]() {LogicEngine logic;});

    graphicalThread.join();
    logicThread.join();

    return 0;
    }
