#include "head.h"

std::string decimalToBinaryString(int decimalNumber) {
	std::string binaryString = "0";

	if (decimalNumber > 0) {
		binaryString = " ";
		div_t dv{};
		dv.quot = decimalNumber;

		do {
			dv = div(dv.quot, 2);
			binaryString = std::to_string(dv.rem) + binaryString;
		} while (dv.quot);
	}

	return binaryString;
}