#include "head.h"

int main() {
	int i = 6;
	if (IsPerfect(6)) {
		std::cout << "Yes" << std::endl;
	}
	else {
		std::cout << "No" << std::endl;
	}

	std::cout << "Greater perfect number than " << i << " is " << BiggerPerfect(i);
	return 0;
}