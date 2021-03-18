#include "head.h"

int main() {
	Queue<int> queue = Queue<int>();
	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.enqueue(4);
	queue.dequeue();
	queue.enqueue(1);
	queue.dequeue();
	std::cout << queue.getFront() << std::endl;

	return 0;
}