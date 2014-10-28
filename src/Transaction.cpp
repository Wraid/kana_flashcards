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
  _user_waiting(true),
  _answer(Transaction::BLANK),
  _answer_ready(false),
  _exit(false),
  _first_try(true),
  _correct_counter(0),
  _incorrect_counter(0){}

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
    Transaction::setFirstTry(true);
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

void Transaction::setUserWaiting(const bool &user_waiting)
    {
    std::lock_guard<std::recursive_mutex> guard(_guard_mutex);
    _user_waiting = user_waiting;
    }

bool Transaction::userWaiting()
    {
    std::lock_guard<std::recursive_mutex> guard(_guard_mutex);
    return _user_waiting;
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

void Transaction::setFirstTry(const bool &first_try)
    {
    std::lock_guard<std::recursive_mutex> guard(_guard_mutex);
    _first_try = first_try;
    }

bool Transaction::firstTry()
    {
    std::lock_guard<std::recursive_mutex> guard(_guard_mutex);
    return _first_try;
    }

void Transaction::incrementNumberCorrect()
    {
    std::lock_guard<std::recursive_mutex> guard(_guard_mutex);
    _correct_counter++;
    }

size_t Transaction::getNumberCorrect()
    {
    return _correct_counter;
    }

void Transaction::incrementNumberIncorrect()
    {
    std::lock_guard<std::recursive_mutex> guard(_guard_mutex);
    _incorrect_counter++;
    }

size_t Transaction::getNumberIncorrect()
    {
    return _incorrect_counter;
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

