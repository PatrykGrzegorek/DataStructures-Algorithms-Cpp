#include "head.h"

int main() {
	BST* bst = new BST;
	std::cout << (bst->isEmpty() ? "Drzewo jest puste" : "Drzewo nie jest puste") << std::endl;
	bst->insert(5);
	bst->insert(3);
	bst->insert(7);
	bst->insert(4);
	bst->insert(2);
	std::cout << (bst->isEmpty() ? "Drzewo jest puste" : "Drzewo nie jest puste") << std::endl;
	std::cout << "Drzewo zawiera element o wartosci 3: " << bst->contains(3) << std::endl;
	std::cout << "Drzewo zawiera element o wartosci 9: " << bst->contains(9) << std::endl;
	bst->printInOrder();
	bst->clear();
	std::cout << (bst->isEmpty() ? "Drzewo jest puste" : "Drzewo nie jest puste") << std::endl;
	return 0;
}