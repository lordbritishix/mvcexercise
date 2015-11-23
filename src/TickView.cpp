/*
 * TickView.cpp
 *
 *  Created on: Nov 23, 2015
 */
#include "../include/TickView.h"
#include "../include/TimerView.h"
#include "../include/Timer.h"
#include "../include/Subject.h"


void TickView::display(std::ostream& os) const {
	os << "*" << std::endl;
}

void TickView::update(Subject* subject) {
	if (dynamic_cast<Timer*>(subject)) {
		display(std::cout);
	}
}
