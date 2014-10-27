/**
 * Name        : Transaction.h
 * Author      : Stuart Will
 * Copyright   : 2014 Stuart Will
 * Description : Object to hold user input data and randomly selected flashcard.
 */

#include <string>
#include <mutex>

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

    // getter and setter for the randomly selected flashcard
    void setSelectedCard(const Flashcard &selected_card);
    Flashcard getSelectedCard();

    // function to reset the shared transaction information
    // called whenever a new transaction is desired
    void resetSelectedCard();

    // getter and setter for the user input
    void setUserInput(const std::string &user_input);
    std::string getUserInput();

    // getter and setter for the logic engine response
    void setResponse(const Answers &answer);
    Answers getResponse();

    // getter and setter for the program exit signal
    void setExit(const bool &exit);
    bool exit();

private:
    std::mutex _std_mutex;
    std::recursive_mutex _guard_mutex;
    Flashcard _selected_card;
    std::string _user_input;
    Answers _answer;
    bool _answer_ready;
    bool _exit;
    };

#endif /* TRANSACTION_H_ */
