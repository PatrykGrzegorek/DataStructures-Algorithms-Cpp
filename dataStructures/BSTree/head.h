#pragma once

#include <iostream>

struct BSTNode {
	int Key;
	BSTNode* Left;
	BSTNode* Right;
	BSTNode* Parent;
};

class BST {
	BSTNode* root;
	int BSTSize = 0;
protected:
	BSTNode* insert(BSTNode*, int);
	void printInOrder(BSTNode*);
	BSTNode* contains(BSTNode*, int);
	void clear(BSTNode*);
public:
	BST();
	~BST();

	void insert(int);
	void printInOrder();
	bool contains(int);
	void clear();

	bool isEmpty();
};
