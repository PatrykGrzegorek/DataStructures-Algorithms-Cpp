#pragma once

#include <iostream>

template <class T>
struct Node {
	T value;
	Node<T>* next;

	Node(T);
};

template <class T>
class Queue {
	int counter;
	Node<T>* Front;
	Node<T>* Back;
public:
	Queue();

	bool isEmpty();
	T getFront();
	void enqueue(T);
	void dequeue();
};

template <class T>
Node<T>::Node(T key) :
	value(key) {
}

template <class T>
Queue<T>::Queue():
	counter(0), Front(NULL), Back(NULL){
}

template <class T>
bool Queue<T>::isEmpty() {
	return counter ? false : true;
}

template <class T>
T Queue<T>::getFront() {
	return Front->value;
}

template <class T>
void Queue<T>::enqueue(T key) {
	Node<T>* node = new Node<T>(key);

	if (isEmpty()) {
		node->next = NULL;
		Front = node;
		Back = Front;
	}
	else {
		Back->next = node;
		Back = node;
	}
	counter++;
}

template <class T>
void Queue<T>::dequeue() {
	if (isEmpty()) {
		return;
	}

	Node<T>* node = Front;
	Front = Front->next;
	delete node;
	counter--;
}