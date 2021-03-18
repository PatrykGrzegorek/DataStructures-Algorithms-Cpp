#include "head.h"

BST::BST() :
	root(NULL), BSTSize(0) {
}

BSTNode* BST::insert(BSTNode* node, int key) {
	if (node == NULL) {
		node = new BSTNode;
		node->Key = key;
		node->Left = NULL;
		node->Right = NULL;
		node->Parent = NULL;
	}

	else if (node->Key < key) {
		node->Right = insert(node->Right, key);
		node->Right->Parent = node;
	}

	else {
		node->Left = insert(node->Left, key);
		node->Left->Parent = node;
	}

	return node;
}

void BST::insert(int key) {
	root = insert(root, key);
	BSTSize++;
}

void BST::printInOrder(BSTNode* node) {
	if (node == NULL) {
		return;
	}

	printInOrder(node->Left);
	std::cout << node->Key << " ";
	printInOrder(node->Right);
}

void BST::printInOrder() {
	printInOrder(root);
	std::cout << std::endl;
}

BSTNode* BST::contains(BSTNode* node, int key) {
	if (node == NULL) {
		return NULL;
	}

	else if (node->Key == key) {
		return node;
	}

	else if (node->Key < key) {
		return contains(node->Right, key);
	}

	else {
		return contains(node->Left, key);
	}
}

bool BST::contains(int key) {
	BSTNode* result = contains(root, key);

	return result == NULL ? false : true;
}

void BST::clear(BSTNode* node)
{
	if (node)
	{
		clear(node->Left);
		clear(node->Right);
		delete node;
	}
}

void BST::clear() {
	clear(root);
	BSTSize = 0;
}

bool BST::isEmpty() {
	return BSTSize == 0 ? true : false;
}