/**
 * Name        : GraphicalEngine.cpp
 * Author      : Stuart Will
 * Version     : 0.01
 * Copyright   : 2014 Stuart Will
 * Description : See GraphicalEngine.h
 */

#include <iostream>
#include <thread>

#include "GraphicalEngine.h"

GraphicalEngine::GraphicalEngine()
    {
    startGUI();
    std::cout << "Graphical Engine: " << std::this_thread::get_id() << std::endl;
    }

void GraphicalEngine::startGUI()
    {

    }

GraphicalEngine::~GraphicalEngine()
    {
    }

