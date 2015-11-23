#ifndef TIMER_H
#define TIMER_H
#include <utility>
#include <atomic>

#include "../include/Observer.h"
#include "../include/Subject.h"


class Timer: public Observer, public Subject {
public:
	Timer();
	virtual ~Timer() {};
	void start();
	void stop();
	void reset();
	unsigned long get() const;

	Timer(const Timer&) = delete;				//not allow copying/assignment of timers
	Timer& operator=(const Timer&) = delete;  	//not allow copying/assignment of timers

	virtual void update(Subject *) override;

private:
	std::atomic_ulong sec_; 		//number of seconds elapsed
	std::atomic_bool ticking_;		//is timer ticking or not
	void run();						//function executed by thread
};

#endif
