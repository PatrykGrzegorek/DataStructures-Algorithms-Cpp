#pragma once

#include <iostream>

template <class T>
struct Node {
	T value;
	Node<T>* next;

	Node(T);
};

template <class T>
class LinkedList {
	int counter;
	Node<T>* Head;
	Node<T>* Tail;
public:
	LinkedList();

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
};

template <class T>
Node<T>::Node(T key) :
	value(key) {
}

template <class T>
LinkedList<T>::LinkedList():
	counter(0), Head(NULL), Tail(NULL){
}

template <class T>
Node<T>* LinkedList<T>::get(int index) {
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
void LinkedList<T>::insertHead(T key) {
	Node<T>* node = new Node<T>(key);

	node->next = Head;
	Head = node;

	if (counter == 0) {
		Tail = Head;
	}

	counter++;
}

template <class T>
void LinkedList<T>::insertTail(T key) {
	if (counter == 0) {
		insertHead(key);
		return;
	}

	Node<T>* node = new Node<T>(key);

	Tail->next = node;
	Tail = node;

	counter++;
}

template <class T>
void LinkedList<T>::insert(int index, T key) {
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
	prevNode->next = node;

	counter++;
}

template <class T>
int LinkedList<T>::contains(T key) {
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
void LinkedList<T>::removeHead() {
	if (counter == 0) {
		return;
	}

	Node<T>* node = Head;
	Head = Head->next;
	delete node;
	counter--;
}

template <class T>
void LinkedList<T>::removeTail() {
	if (counter == 0) {
		return;
	}

	if (counter == 1) {
		removeHead();
		return;
	}

	Node<T>* prevNode = Head;
	Node<T>* node = Head->next;

	while (node->next != NULL) {
		prevNode = prevNode->next;
		node = node->next;
	}

	prevNode->next = NULL;
	Tail = prevNode;

	delete node;
	counter--;
}

template <class T>
void LinkedList<T>::remove(int index) {
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

	delete node;
	counter--;
}

template<class T>
int LinkedList<T>::count() {
	return counter;
}

template<class T>
void LinkedList<T>::printList() {
	Node<T>* node = Head;
	for (int i = 0; i < counter; i++) {
		std::cout << node->value << " ";
		node = node->next;
	}
	std::cout << std::endl;
}