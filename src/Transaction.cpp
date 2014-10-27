/**
 * Name        : Transaction.cpp
 * Author      : Stuart Will
 * Copyright   : 2014 Stuart Will
 * Description : See Transaction.h
 */

#include "Transaction.h"

Transaction::Transaction()
: _selected_card(Flashcard("","")),
  _user_input(""),
  _answer(Transaction::BLANK),
  _answer_ready(false),
  _exit(false){}

void Transaction::setSelectedCard(const Flashcard &selected_card)
    {
    std::lock_guard<std::recursive_mutex> guard(_guard_mutex);
    _selected_card = selected_card;
    }

Flashcard Transaction::getSelectedCard()
    {
    std::lock_guard<std::recursive_mutex> guard(_guard_mutex);
    return _selected_card;
    }

void Transaction::resetSelectedCard()
    {
    std::lock_guard<std::recursive_mutex> guard(_guard_mutex);
    Transaction::setSelectedCard(Flashcard("",""));
    _answer = Transaction::BLANK;
    _answer_ready = false;
    }

void Transaction::setUserInput(const std::string &user_input)
    {
    std::lock_guard<std::recursive_mutex> guard(_guard_mutex);
    _user_input = user_input;
    }

std::string Transaction::getUserInput()
    {
    std::lock_guard<std::recursive_mutex> guard(_guard_mutex);
    return _user_input;
    }

void Transaction::setResponse(const Answers &answer)
    {
    std::lock_guard<std::recursive_mutex> guard(_guard_mutex);
    _answer = answer;
    _user_input = "";
    if (answer == Transaction::BLANK)
        _answer_ready = false;
    else
        _answer_ready = true;
    }

Transaction::Answers Transaction::getResponse()
    {
    std::lock_guard<std::recursive_mutex> guard(_guard_mutex);
    return _answer;
    }

void Transaction::setExit(const bool &exit)
    {
    std::lock_guard<std::recursive_mutex> guard(_guard_mutex);
    _exit = exit;
    }

bool Transaction::exit()
    {
    std::lock_guard<std::recursive_mutex> guard(_guard_mutex);
    return _exit;
    }

Transaction::~Transaction(){}

