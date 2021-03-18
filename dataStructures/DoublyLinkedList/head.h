#pragma once

#include <iostream>

template <class T>
struct Node {
	T value;
	Node<T>* previous;
	Node<T>* next;

	Node(T);
};

template <class T>
class DoublyLinkedList {
	int counter;
	Node<T>* Head;
	Node<T>* Tail;
public:
	DoublyLinkedList();

	Node<T>* get(int);

	void insertHead(T);
	void insertTail(T);
	void insert(int, T);

	int contains(T);

	void removeHead();
	void removeTail();
	void remove(int);
	
	int count();
	void printList();
	void printListBackward();
};

template <class T>
Node<T>::Node(T key) :
	value(key) {
}

template <class T>
DoublyLinkedList<T>::DoublyLinkedList():
	counter(0), Head(NULL), Tail(NULL){
}

template <class T>
Node<T>* DoublyLinkedList<T>::get(int index) {
	if (index < 0 || index > counter) {
		return NULL;
	}

	Node<T>* node = Head;
	for (int i = 0; i < index; i++) {
		node = node->next;
	}

	return node;
}

template <class T>
void DoublyLinkedList<T>::insertHead(T key) {
	Node<T>* node = new Node<T>(key);

	node->next = Head;

	if (Head != NULL) {
		Head->previous = node;
	}

	Head = node;

	if (counter == 0) {
		Tail = Head;
	}

	counter++;
}

template <class T>
void DoublyLinkedList<T>::insertTail(T key) {
	if (counter == 0) {
		insertHead(key);
		return;
	}

	Node<T>* node = new Node<T>(key);

	Tail->next = node;
	node->previous = Tail;
	Tail = node;

	counter++;
}

template <class T>
void DoublyLinkedList<T>::insert(int index, T key) {
	if (index == 0) {
		insertHead(key);
		return;
	}

	else if (index == counter) {
		insertTail(key);
		return;
	}

	Node<T>* prevNode = Head;
	for (int i = 1; i < index - 1; i++) {
		prevNode = prevNode->next;
	}

	Node<T>* nextNode = prevNode->next;
	Node<T>* node = new Node<T>(key);

	node->next = nextNode;
	node->previous = prevNode;
	prevNode->next = node;
	nextNode->previous = node;

	counter++;
}

template <class T>
int DoublyLinkedList<T>::contains(T key) {
	if (counter == 0) {
		return 0;
	}

	int index = 0;
	Node<T>* node = Head;

	while (node->value != key) {
		index++;
		node = node->next;

		if (node == NULL) {
			return 0;
		}
	}

	return index;
}

template <class T>
void DoublyLinkedList<T>::removeHead() {
	if (counter == 0) {
		return;
	}

	Node<T>* node = Head;
	Head = Head->next;
	delete node;

	if (Head != NULL) {
		Head->previous = NULL;
	}

	counter--;
}

template <class T>
void DoublyLinkedList<T>::removeTail() {
	if (counter == 0) {
		return;
	}

	if (counter == 1) {
		removeHead();
		return;
	}

	Node<T>* node = Tail;
	Tail = Tail->previous;
	Tail->next = NULL;

	delete node;
	counter--;
}

template <class T>
void DoublyLinkedList<T>::remove(int index) {
	if (counter == 0) {
		return;
	}

	if (index < 0 || index >= counter) {
		return;
	}

	if (index == 0) {
		removeHead();
		return;
	}

	if (index == counter - 1) {
		removeTail();
		return;
	}

	Node<T>* prevNode = Head;

	for (int i = 0; i < index - 1; ++i) {
		prevNode = prevNode->next;
	}

	Node<T>* node = prevNode->next;
	Node<T>* nextNode = node->next;

	prevNode->next = nextNode;
	nextNode->previous = prevNode;

	delete node;
	counter--;
}

template<class T>
int DoublyLinkedList<T>::count() {
	return counter;
}

template<class T>
void DoublyLinkedList<T>::printList() {
	Node<T>* node = Head;
	for (int i = 0; i < counter; i++) {
		std::cout << node->value << " ";
		node = node->next;
	}
	std::cout << std::endl;
}

template<class T>
void DoublyLinkedList<T>::printListBackward() {
	Node<T>* node = Tail;
	for (int i = 0; i < counter; i++) {
		std::cout << node->value << " ";
		node = node->previous;
	}
	std::cout << std::endl;
}