/**
 * Name        : Flashcard.cpp
 * Author      : Stuart Will
 * Version     : 0.01
 * Copyright   : 2014 Stuart Will
 * Description : See Flashcard.h
 */

#include "Flashcard.h"

Flashcard::Flashcard(std::string symbol, std::string translation) :
    _symbol(symbol), _translation(translation) {}

std::string Flashcard::getSymbol()
    {
    return _symbol;
    }

std::string Flashcard::getTranslation()
    {
    return _translation;
    }

Flashcard::~Flashcard()
    {
    // TODO Auto-generated destructor stub
    }

