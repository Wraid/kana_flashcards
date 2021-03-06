/**
 * Name        : ConfigurationObject.h
 * Author      : Stuart Will
 * Copyright   : 2014 Stuart Will
 * Description : Stores lists of possible data to use as flashcards.
 *               Creates flashcards out of selected data and stores them in a
 *               given list. This list is given to the logic engine in main.cpp.
 */

#include <vector>

#include "FlashcardDecks.h"

#ifndef CONFIGURATIONOBJECT_H_
#define CONFIGURATIONOBJECT_H_

class ConfigurationObject
    {
public:
    ConfigurationObject(FlashcardDecks &flashcard_decks);
    virtual ~ConfigurationObject();

    // retrieve all possible flashcard decks
    void getFlashcardDecks(FlashcardDecks &flashcard_decks);
    };

#endif /* CONFIGURATIONOBJECT_H_ */
