#ifndef SECVIEW_H
#define SECVIEW_H
#include <iostream>
#include "TimerView.h"

class Timer;

class SecView: public TimerView {
public:
	SecView(Timer *timer) : TimerView(timer) {};
	virtual void display(std::ostream& os) const;
	virtual void update(Subject *s);

	SecView(const SecView&) = delete;
	SecView& operator=(const SecView&) = delete;
};

#endif
