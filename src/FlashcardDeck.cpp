/**
 * Name        : FlashcardDeck.cpp
 * Author      : Stuart Will
 * Version     : 0.01
 * Copyright   : 2014 Stuart Will
 * Description : See FlashcardDeck.h
 */

#include <iostream>

#include "FlashcardDeck.h"

FlashcardDeck::FlashcardDeck(const std::string deck_name)
: _deck_name(deck_name){}

std::string FlashcardDeck::getDeckName()
    {
    return _deck_name;
    }

std::string FlashcardDeck::getTranslation(const std::string symbol)
    {
    for (auto flashcard : *this)
        {
        if (0 == symbol.compare(flashcard.getSymbol()))
                return flashcard.getTranslation();
        }

    std::cerr << "No valid card found." << std::endl;
    std::exit(0);
    }

std::string FlashcardDeck::getSymbol(const std::string translation)
    {
    for (auto flashcard : *this)
        {
        if (0 == translation.compare(flashcard.getTranslation()))
                return flashcard.getSymbol();
        }

    std::cerr << "No valid card found." << std::endl;
    std::exit(0);
    }

Flashcard FlashcardDeck::getFlashcard(const std::string symbol, const std::string translation)
    {
    for (auto flashcard : *this)
        {
        if (   0 == symbol.compare(flashcard.getSymbol())
            && 0 == translation.compare(flashcard.getTranslation()))
                return flashcard;
        }

    std::cerr << "No valid card found." << std::endl;
    std::exit(0);
    }

void FlashcardDeck::setReady(bool ready)
    {
    _ready = ready;
    }

bool FlashcardDeck::isReady() const
    {
    return _ready;
    }

FlashcardDeck::~FlashcardDeck(){}

