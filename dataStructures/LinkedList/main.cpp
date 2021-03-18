#include "head.h"

int main() {
	LinkedList<int> linkedList = LinkedList<int>();
	linkedList.insertHead(1);
	linkedList.insertHead(2);
	linkedList.insertTail(3);
	linkedList.insert(2, 4);
	linkedList.printList();
	linkedList.remove(1);
	linkedList.printList();
	std::cout << linkedList.count() << std::endl;

	return 0;
}