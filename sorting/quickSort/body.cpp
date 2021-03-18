#include "head.h"

int partition(int arr[], int startIndex, int endIndex) {
	int pivot = arr[startIndex];
	int middleIndex = startIndex;

	for (int i = startIndex + 1; i <= endIndex; ++i) {
		if (arr[i] < pivot) {
			middleIndex++;
			std::swap(arr[i], arr[middleIndex]);
		}
	}

	std::swap(arr[startIndex], arr[middleIndex]);
	return middleIndex;
}

void quickSort(int arr[], int startIndex, int endIndex) {
	if (startIndex < endIndex) {
		int pivotIndex = partition(arr, startIndex, endIndex);
		quickSort(arr, startIndex, pivotIndex - 1);
		quickSort(arr, pivotIndex + 1, endIndex);
	}
}