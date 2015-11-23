#include <iostream>
#include "../include/Timer.h"
#include "../include/KeyboardController.h"
#include "../include/SecView.h"
#include "../include/MinSecView.h"
#include "../include/TickView.h"
#include "../include/TimerView.h"

using namespace std;

int main() {
	cout << "s for start" << endl;
	cout << "h for stop" << endl;
	cout << "r for reset" << endl;

	Timer* timer = new Timer();
	KeyboardController* keyboardController = new KeyboardController();

	TimerView* secView = new MinSecView(timer);
//	TimerView* secView = new SecView(timer);
//	TimerView* secView = new TickView(timer);

	keyboardController->subscribe(timer);
	timer->subscribe(secView);
	keyboardController->start();

	cout << "Done" << endl;
	return 0;
}
