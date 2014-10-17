/**
 * Name        : ConfigurationObject.cpp
 * Author      : Stuart Will
 * Version     : 0.01
 * Copyright   : 2014 Stuart Will
 * Description : See ConfigurationObject.h
 */

#include <iostream>

#include "ConfigurationObject.h"

ConfigurationObject::ConfigurationObject(std::vector<Flashcard> &flashcards)
    : _flashcards(flashcards){
    Flashcard f("a", "a");
    flashcards.push_back(f);
    std::cout << "Symbol: " << flashcards.at(0).getSymbol() << "  Translation: " << flashcards.at(0).getTranslation() << std::endl;
}

ConfigurationObject::~ConfigurationObject()
    {
    // TODO Auto-generated destructor stub
    }

