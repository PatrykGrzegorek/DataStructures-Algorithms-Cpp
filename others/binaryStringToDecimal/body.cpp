#include "head.h"

int binaryStringToDecimal(std::string binaryString) {
	int decimalNumber = 0;
	int p;
	std::string::reverse_iterator it;

	for (it = binaryString.rbegin(), p = 0; it != binaryString.rend(); it++, p++) {
		if (*it == '1') {
			decimalNumber += (int)pow(2, p);
		}
	}

	return decimalNumber;
}