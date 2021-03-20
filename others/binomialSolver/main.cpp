#include "head.h"

int main() {
	BinomialSolver b1(1.0, -5.0, 4.0);
	std::cout << "x1 = " << b1.s1 << ", x2 = " << b1.s2 << std::endl;
	std::cout << "x*x - 5x + 4 for x = 3 : ";
	b1.Calculate(3.0);
}