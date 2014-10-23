/**
 * Name        : FlashcardDecks.h
 * Author      : Stuart Will
 * Version     : 
 * Copyright   : 2014 Stuart Will
 * Description : Extending class for std::vector<FlashcardDeck>
 */

#include <vector>

#include "FlashcardDeck.h"

#ifndef FLASHCARDDECKS_H_
#define FLASHCARDDECKS_H_

class FlashcardDecks : public std::vector<FlashcardDeck>
    {
public:
    FlashcardDecks();
    virtual ~FlashcardDecks();

    FlashcardDeck getDeck(const std::string deck_name);
    };

#endif /* FLASHCARDDECKS_H_ */
