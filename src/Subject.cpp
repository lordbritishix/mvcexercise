/*
 * Subject.cpp
 *
 *  Created on: Nov 23, 2015
 */
#include "../include/Subject.h"
#include "../include/Observer.h"

void Subject::notify() {
	for (std::list<Observer*>::iterator it = observers_.begin(); it != observers_.end(); ++it) {
		(*it)->update(this);
	}
}


void Subject::subscribe(Observer* obs) {
	if (obs != 0) {
		observers_.push_back(obs);
	}
}

void Subject::unsubscribe(Observer* obs) {
	if (obs != 0) {
		observers_.remove(obs);
	}
}
