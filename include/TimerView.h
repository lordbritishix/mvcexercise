#ifndef TIMERVIEW_H
#define TIMERVIEW_H
#include <iostream>
#include "../include/Observer.h"

class Timer;
class Subject;

class TimerView: public Observer {
public:
	TimerView(Timer *timer) : timer_(timer) {};
	virtual void update(Subject *s) = 0; 	//from Observer
	virtual void display(std::ostream& os) const = 0;

protected:
	Timer* timer_;

};

#endif
