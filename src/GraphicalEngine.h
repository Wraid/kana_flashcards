/**
 * Name        : GraphicalEngine.h
 * Author      : Stuart Will
 * Copyright   : 2014 Stuart Will
 * Description : Primary object for controlling graphical elements
 *               of the application.
 */

#include "FlashcardDecks.h"
#include "Transaction.h"

#ifndef GUI_H_
#define GUI_H_

class GraphicalEngine
    {
public:
    GraphicalEngine(const FlashcardDecks &flashcard_decks, FlashcardDeck &selected_deck, Transaction &transaction);
    virtual ~GraphicalEngine();

    // build the user's chosen deck
    void getSelectedDeck(const FlashcardDecks &flashcard_decks, FlashcardDeck &selected_deck);
    };

#endif /* GUI_H_ */
