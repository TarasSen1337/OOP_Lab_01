#include "Counter.h"
#include <iostream>

using namespace std;

Counter::Counter() {
	cout << "Counter created, range - (0;10)" << endl;
	value = 0;
	min = 0;
	max = 10;
}

Counter::~Counter() {
	cout << "Counter is deleted" << endl;
}

void Counter::SetMin(int num) {
	min = num;
	if (value < num) value = min;
	cout << "Minimum set to " << num << endl;
}

void Counter::SetMax(int num) {
	max = num;
	if (value > num - 1) value = min;
	cout << "Maximum set to " << num << endl;
}

void Counter::Count() {
	value++;
	if (value > max - 1) value = min;
}

void Counter::GetValue(void) {
	cout << "Counter value: " << value << endl;
}