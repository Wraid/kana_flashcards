/**
 * Name        : FlashcardDeck.h
 * Author      : Stuart Will
 * Version     : 0.01
 * Copyright   : 2014 Stuart Will
 * Description : Container for a list of flashcards.
 */

#include <vector>

#include "Flashcard.h"

#ifndef FLASHCARDDECK_H_
#define FLASHCARDDECK_H_

class FlashcardDeck : public std::vector<Flashcard>
    {
public:
    FlashcardDeck(std::string deck_name);
    virtual ~FlashcardDeck();

    std::string getDeckName();
    std::string getSymbol(std::string translation);
    std::string getTranslation(std::string symbol);

private:
    std::string _deck_name;
    };

#endif /* FLASHCARDDECK_H_ */
