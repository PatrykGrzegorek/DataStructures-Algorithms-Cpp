#include "head.h"

bool IsPerfect(int n)
{
	int s = 1, p = sqrt(n);
	for (int i = 2; i <= p; i++) {
		if (n % i == 0) {
			s += i + n / i;
		}
	}
	if (n == p * p) s -= p;
	if (n == s) return 1;

	return 0;
}

int BiggerPerfect(int n) {
	bool per = true;
	int x = n + 1;
	while (per) {
		if (IsPerfect(x)) {
			return x;
		}
		x++;
	}
}
