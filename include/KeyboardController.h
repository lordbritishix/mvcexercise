#ifndef KEYBOARDCONTROLLER_H
#define KEYBOARDCONTROLLER_H
#include "Subject.h"
#include <string>

class KeyboardController: public Subject {
public:
	void start(); 					//start the loop to get user command
	std::string getCommand() const; 		//return the command

private:
	std::string cmd_;

};

#endif
