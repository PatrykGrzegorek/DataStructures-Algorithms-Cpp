#include "head.h"

int main() {
	int arr[14] = { 420, 14, 6, 9, 11, 53, 28, 2, 43, 5, 69, 11, 9, 2};

	for (int i = 0; i < 14; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	quickSort(arr, 0, 13);
	for (int i = 0; i < 14; i++) {
		std::cout << arr[i] << " ";
	}

	return 0;
}