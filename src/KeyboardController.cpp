/*
 * KeyboardController.cpp
 *
 *  Created on: Nov 23, 2015
 */

#include "../include/KeyboardController.h"
#include <iostream>

using namespace std;

void KeyboardController::start() {
	while (true) {
		cin >> cmd_;

		if (cin.eof()) {
			//Unblock main thread - no need to stop timer thread as the main thread will terminate anyway
			break;
		}

		notify();
	}
}

std::string KeyboardController::getCommand() const {
	return cmd_;
}

