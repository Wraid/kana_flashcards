/**
 * Name        : Transaction.h
 * Author      : Stuart Will
 * Version     : 0.01
 * Copyright   : 2014 Stuart Will
 * Description : Object to hold user input data and randomly selected flashcard.
 */

#include <string>

#include "Flashcard.h"

#ifndef TRANSACTION_H_
#define TRANSACTION_H_

class Transaction
    {
public:

    enum Answers
        {
            BLANK, CORRECT, INCORRECT
        };

    Transaction();
    virtual ~Transaction();

    void setSelectedCard(const Flashcard &selected_card);
    Flashcard getSelectedCard() const;
    void resetSelectedCard();

    void setUserInput(const std::string &user_input);
    std::string getUserInput();

    void setAnswer(const Answers &answer);
    Answers isRight() const;

    void setExit(const bool &exit);
    bool exit() const;

private:

    Flashcard _selected_card = Flashcard("","");
    std::string _user_input = "";
    Answers _answer = BLANK;
    bool _exit = false;
    };

#endif /* TRANSACTION_H_ */
