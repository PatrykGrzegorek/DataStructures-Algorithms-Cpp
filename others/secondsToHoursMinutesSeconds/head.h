#pragma once

#include <iostream>
#include <iomanip>

struct TimeSpan {
	unsigned int hours;
	unsigned int minutes;
	unsigned int seconds;

	TimeSpan(unsigned int seconds);
	void print();
};