#pragma once

#include <iostream>

struct BinomialSolver {
	double a, b, c;
	double s1, s2;

	void Elements();

	BinomialSolver(double x2, double x1, double x0):
		a(x2), b(x1), c(x0){
		Elements();
	}

	~BinomialSolver() {};

	void Calculate(float);
};