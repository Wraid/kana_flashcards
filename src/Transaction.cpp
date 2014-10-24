/**
 * Name        : Transaction.cpp
 * Author      : Stuart Will
 * Version     : 
 * Copyright   : 2014 Stuart Will
 * Description : 
 */

#include "Transaction.h"

Transaction::Transaction(){}

void Transaction::setSelectedCard(const Flashcard &selected_card)
    {
    _selected_card = selected_card;
    }

Flashcard Transaction::getSelectedCard() const
    {
    return _selected_card;
    }

void Transaction::resetSelectedCard()
    {
    _selected_card = Flashcard("","");
    }

void Transaction::setUserInput(const std::string &user_input)
    {
    _user_input = user_input;
    }

std::string Transaction::getUserInput()
    {
    return _user_input;
    }

void Transaction::setAnswer(const Answers &answer)
    {
    _answer = answer;
    }

Transaction::Answers Transaction::isRight() const
    {
    return _answer;
    }

void Transaction::setExit(const bool &exit)
    {
    _exit = exit;
    }

bool Transaction::exit() const
    {
    return _exit;
    }

Transaction::~Transaction(){}

