#include "head.h"

TimeSpan::TimeSpan(unsigned int sec){
	hours = sec / 3600;
	minutes = (sec - hours * 3600) / 60;
	seconds = sec - hours * 3600 - minutes * 60;
}

void TimeSpan::print() {
	std::cout << hours << ":";
	std::cout << std::setfill('0') << std::setw(2) << minutes << ":";
	std::cout << std::setfill('0') << std::setw(2) << seconds;
}
