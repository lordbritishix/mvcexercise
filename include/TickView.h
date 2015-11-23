/*
 * TickView.h
 *
 *  Created on: Nov 23, 2015
 */
#ifndef TICKVIEW_H_
#define TICKVIEW_H_

#include <iostream>
#include "TimerView.h"

class Timer;

class TickView: public TimerView {
public:
	TickView(Timer *timer) : TimerView(timer) {};
	virtual void display(std::ostream& os) const;
	virtual void update(Subject *s);

	TickView(const TickView&) = delete;
	TickView& operator=(const TickView&) = delete;
};

#endif /* TICKVIEW_H_ */
