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
class Deque {
	int counter;
	Node<T>* Front;
	Node<T>* Back;
public:
	Deque();

	bool isEmpty();
	T getFront();
	void enqueueFront(T);
	void enqueueBack(T);
	void dequeueFront();
	void dequeueBack();
};

template <class T>
Node<T>::Node(T key) :
	value(key) {
}

template <class T>
Deque<T>::Deque():
	counter(0), Front(NULL), Back(NULL){
}

template <class T>
bool Deque<T>::isEmpty() {
	return counter ? false : true;
}

template <class T>
T Deque<T>::getFront() {
	return Front->value;
}

template <class T>
void Deque<T>::enqueueFront(T key) {
	Node<T>* node = new Node<T>(key);

	node->next = Front;

	if (Front != NULL) {
		Front->previous = node;
	}

	Front = node;
	if (isEmpty()) {
		Back = Front;
	}
	counter++;
}

template <class T>
void Deque<T>::enqueueBack(T key) {
	if (isEmpty()) {
		enqueueFront(key);
		return;
	}
	Node<T>* node = new Node<T>(key);

	Back->next = node;
	node->previous = Back;
	Back = node;

	counter++;
}

template <class T>
void Deque<T>::dequeueFront() {
	if (isEmpty()) {
		return;
	}

	Node<T>* node = Front;
	Front = Front->next;
	delete node;

	if (Front != NULL) {
		Front->previous = NULL;
	}
	counter--;
}

template <class T>
void Deque<T>::dequeueBack() {
	if (isEmpty()) {
		return;
	}

	if (counter == 1) {
		dequeueFront();
		return;
	}

	Node<T>* node = Back;
	Back = Back->previous;
	Back->next=NULL;
	delete node;

	counter--;
}