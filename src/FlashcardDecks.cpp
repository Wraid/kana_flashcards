/**
 * Name        : FlashcardDecks.cpp
 * Author      : Stuart Will
 * Version     : 
 * Copyright   : 2014 Stuart Will
 * Description : 
 */

#include <iostream>

#include "FlashcardDecks.h"

FlashcardDecks::FlashcardDecks(){}

FlashcardDeck FlashcardDecks::getDeck(std::string deck_name)
    {

    for (auto deck_entry : *this)
	{
	if (0 == deck_name.compare(deck_entry.getDeckName()))
	    return deck_entry;
	}

	std::cerr << "No valid deck found." << std::endl;
	std::exit(0);
    }

FlashcardDecks::~FlashcardDecks(){}

