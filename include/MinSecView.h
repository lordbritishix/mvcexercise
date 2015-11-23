/*
 * MinSecView.h
 *
 *  Created on: Nov 23, 2015
 *      Author: jim.quitevis
 */

#ifndef MINSECVIEW_H_
#define MINSECVIEW_H_

#include <iostream>
#include "TimerView.h"

class Timer;

class MinSecView: public TimerView {
public:
	MinSecView(Timer *timer) : TimerView(timer) {};
	virtual void display(std::ostream& os) const;
	virtual void update(Subject *s);

	MinSecView(const MinSecView&) = delete;
	MinSecView& operator=(const MinSecView&) = delete;
};



#endif /* MINSECVIEW_H_ */
