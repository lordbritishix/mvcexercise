/*
 * MinSecView.cpp
 *
 *  Created on: Nov 23, 2015
 */
#include "../include/MinSecView.h"
#include "../include/TimerView.h"
#include "../include/Timer.h"
#include "../include/Subject.h"

using namespace std;

void MinSecView::display(std::ostream& os) const {
	long sec = timer_->get();
	long min_part = sec / 60;
	long sec_part = sec - (min_part * 60);

	if (sec_part < 10) {
		os << min_part << ":0" << sec_part << endl;
	}
	else {
		os << min_part << ":" << sec_part << endl;
	}
}

void MinSecView::update(Subject *subject) {
	if (dynamic_cast<Timer*>(subject)) {
		display(std::cout);
	}
}



