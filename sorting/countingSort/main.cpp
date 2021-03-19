#include "head.h"

int main() {
	int arr[14] = { 1, 4, 4, 9, 2, 8, 3, 2, 3, 4, 7, 5, 9, 2};

	for (int i = 0; i < 14; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	countingSort(arr, 14);
	for (int i = 0; i < 14; i++) {
		std::cout << arr[i] << " ";
	}

	return 0;
}