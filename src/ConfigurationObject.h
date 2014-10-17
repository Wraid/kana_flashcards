/**
 * Name        : ConfigurationObject.h
 * Author      : Stuart Will
 * Version     : 0.01
 * Copyright   : 2014 Stuart Will
 * Description : Stores lists of possible data to use as flashcards.
 *               Creates flashcards out of selected data and stores them in a
 *               given list. This list is given to the logic engine in main.cpp.
 */

#include <vector>

#include "Flashcard.h"

#ifndef CONFIGURATIONOBJECT_H_
#define CONFIGURATIONOBJECT_H_

class ConfigurationObject
    {
public:
    ConfigurationObject(std::vector<Flashcard> &flashcards);
    virtual ~ConfigurationObject();

private:
    std::vector<Flashcard> _flashcards;
    };

#endif /* CONFIGURATIONOBJECT_H_ */
