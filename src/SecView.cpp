/*
 * SecView.cpp
 *
 *  Created on: Nov 23, 2015
 */

#include "../include/SecView.h"
#include "../include/TimerView.h"
#include "../include/Timer.h"

void SecView::display(std::ostream& os) const {
	os << timer_->get() << std::endl;
}

void SecView::update(Subject* subject) {
	if (dynamic_cast<Timer*>(subject)) {
		display(std::cout);
	}
}
