/**
 * Name        : LogicEngine.h
 * Author      : Stuart Will
 * Copyright   : 2014 Stuart Will
 * Description : Primary object for controlling logical elements
 *               of the application.
 */

#include "FlashcardDeck.h"
#include "Transaction.h"

#ifndef LOGICENGINE_H_
#define LOGICENGINE_H_

class LogicEngine
    {
public:
    LogicEngine(const FlashcardDeck &selected_deck, Transaction &transaction);
    virtual ~LogicEngine();
    };

#endif /* LOGICENGINE_H_ */
