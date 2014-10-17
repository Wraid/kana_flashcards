/**
 * Name        : Flashcard.h
 * Author      : Stuart Will
 * Version     : 0.01
 * Copyright   : 2014 Stuart Will
 * Description : Object to store flashcard data.
 */

#include <string>

#ifndef FLASHCARD_H_
#define FLASHCARD_H_

class Flashcard
    {
public:
    Flashcard(std::string symbol, std::string meaning);
    virtual ~Flashcard();

    std::string getSymbol();
    std::string getTranslation();

private:
    std::string _symbol;
    std::string _translation;
    };

#endif /* FLASHCARD_H_ */
