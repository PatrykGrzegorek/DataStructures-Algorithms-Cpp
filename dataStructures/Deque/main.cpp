#include "head.h"

int main() {
	Deque<int> deque = Deque<int>();
	deque.enqueueFront(1);
	deque.enqueueFront(2);
	deque.enqueueBack(2);
	deque.enqueueBack(3);
	deque.enqueueFront(4);
	deque.dequeueBack();
	deque.enqueueBack(1);
	deque.dequeueFront();
	std::cout << deque.getFront() << std::endl;

	return 0;
}