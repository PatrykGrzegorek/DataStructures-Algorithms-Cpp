#include "head.h"

int main() {
	int sec = 3782;
	TimeSpan now(sec);
	now.print();
	return 0;
}