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
class Stack {
	int counter;
	Node<T>* Top;
public:
	Stack();

	bool isEmpty();
	T getTop();
	void push(T);
	void pop();
};

template <class T>
Node<T>::Node(T key) :
	value(key) {
}

template <class T>
Stack<T>::Stack():
	counter(0), Top(NULL){
}

template <class T>
bool Stack<T>::isEmpty() {
	return counter ? false : true;
}

template <class T>
T Stack<T>::getTop() {
	return Top->value;
}

template <class T>
void Stack<T>::push(T key) {
	Node<T>* node = new Node<T>(key);
	node->next = Top;
	Top = node;
	counter++;
}

template <class T>
void Stack<T>::pop() {
	if (isEmpty()) {
		return;
	}

	Node<T>* node = Top;
	Top = Top->next;
	delete node;
	counter--;
}