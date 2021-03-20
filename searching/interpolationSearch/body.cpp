#include "head.h"

int interpolationSearch(int arr[], int startIndex, int endIndex, int val) {
	int middleIndex = startIndex + ((val - arr[startIndex]) * (endIndex - startIndex) / ((arr[endIndex]) - arr[startIndex]));

	if (arr[middleIndex] == val) {
		return middleIndex;
	}

	else if (arr[middleIndex] > val) {
		return interpolationSearch(arr, startIndex, middleIndex - 1, val);
	}

	else {
		return interpolationSearch(arr, middleIndex + 1, endIndex, val);
	}

	return -1;
}