#include "head.h"

void countingSort(int arr[], int arrSize) {
	int counterSize = 10;
	int* counterArr = new int [counterSize];
	for (int i = 0; i < counterSize; i++) {
		counterArr[i]=0;
	}
	for (int i = 0; i < arrSize; i++) {
		counterArr[arr[i]]++;
	}
	int arrCounter = 0;
	for (int i = 0; i < counterSize; i++) {
		while (counterArr[i] > 0) {
			arr[arrCounter++] = i;
			--counterArr[i];
		}
		
	}
	delete[] counterArr;
}