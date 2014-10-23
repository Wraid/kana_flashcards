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
    FlashcardDeck(const std::string deck_name);
    virtual ~FlashcardDeck();

    std::string getDeckName();
    std::string getSymbol(const std::string translation);
    std::string getTranslation(const std::string symbol);
    Flashcard getFlashcard(const std::string symbol, const std::string translation);

private:
    std::string _deck_name;
    };

#endif /* FLASHCARDDECK_H_ */
