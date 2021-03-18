#include "head.h"

int binarySearch(int arr[], int startIndex, int endIndex, int wanted) {
	if (startIndex <= endIndex) {
		int middleIndex = startIndex + (endIndex - startIndex) / 2;
		if (arr[middleIndex] == wanted) {
			return middleIndex;
		}

		else if (arr[middleIndex] > wanted) {
			return binarySearch(arr, startIndex, middleIndex - 1, wanted);
		}

		else {
			return binarySearch(arr, middleIndex + 1, endIndex, wanted);
		}
	}
	return -1;
}