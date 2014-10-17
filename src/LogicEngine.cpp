/**
 * Name        : LogicEngine.cpp
 * Author      : Stuart Will
 * Version     : 0.01
 * Copyright   : 2014 Stuart Will
 * Description : See LogicEngine.h
 */

#include <iostream>
#include <thread>

#include "LogicEngine.h"

LogicEngine::LogicEngine()
    {
    std::cout << "Logic Engine: " << std::this_thread::get_id() << std::endl;
    }

LogicEngine::~LogicEngine()
    {
    }

