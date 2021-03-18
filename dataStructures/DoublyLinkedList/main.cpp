#include "head.h"

int main() {
	DoublyLinkedList<int> linkedList = DoublyLinkedList<int>();
	linkedList.insertHead(1);
	linkedList.insertHead(2);
	linkedList.insertHead(2);
	linkedList.insertTail(3);
	linkedList.insert(2, 4);
	linkedList.printList();
	linkedList.remove(1);
	linkedList.printList();
	linkedList.printListBackward();
	std::cout << linkedList.count() << std::endl;

	return 0;
}