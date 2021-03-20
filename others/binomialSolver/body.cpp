#include "head.h"

void BinomialSolver::Elements() {
	double sum;
	sum = b * b - (4 * a * c);
	s1 = (-b - sqrt(sum)) / 2 * a;
	s2 = (-b + sqrt(sum)) / 2 * a;
}

void BinomialSolver::Calculate(float x) {
	double sum;
	sum = a * x * x + b * x + c;
	std::cout<< sum << std::endl;
}
