#include "head.h"

int main() {
	Stack<int> stack = Stack<int>();
	stack.push(1);
	stack.push(2);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.pop();
	stack.push(1);
	stack.pop();
	std::cout << stack.getTop() << std::endl;

	return 0;
}