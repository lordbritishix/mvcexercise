/*
 * Timer.cpp
 *
 *  Created on: Nov 23, 2015
 */
#include <thread>
#include <chrono>
#include "../include/Timer.h"
#include "../include/Subject.h"
#include "../include/KeyboardController.h"
#include <stdio.h>
#include <iostream>

using namespace std;

Timer::Timer() : sec_(0L), ticking_(false) {
}

void Timer::start() {
	if (!ticking_) {
		ticking_ = true;
		std::thread t(&Timer::run, this);
		t.detach();
	}
}

void Timer::stop() {
	ticking_ = false;
}

void Timer::reset() {
	sec_ = 0;
}

unsigned long Timer::get() const {
	return sec_;
}

void Timer::update(Subject * s) {
	if (KeyboardController* keyboardController = dynamic_cast<KeyboardController*>(s)) {
		string cmd = keyboardController->getCommand();

		if (cmd  == "s") {
			start();
		}
		else if (cmd == "h") {
			stop();
		}
		else if (cmd == "r") {
			reset();
		}
	}
}

void Timer::run() {
	while (ticking_) {
		std::this_thread::sleep_for(std::chrono::seconds(1));

		//If after sleeping, timer is not ticking anymore, don't print it
		if (ticking_) {
			sec_++;
			notify();
		}
	}
}


