#include "head.h"

int main() {
	int arr[14] = { 2, 4, 6, 9, 11, 13, 28, 32, 43, 55, 69, 111, 329, 420};

	int wantedValue = 11;

	std::cout<<"Index: "<<binarySearch(arr, 0, 13, wantedValue);

	return 0;
}