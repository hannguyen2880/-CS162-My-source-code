#include "Function.h"
#include <iostream>

void displayArr(DynamicArray& arr, int i) {
	if (i == arr.getsize()) {
		std::cout << "\n";
		return;
	}

	std::cout << arr.data[i] << " ";
	displayArr(arr, ++i);
}

void displayArr_inReversedOrder(DynamicArray& arr, int i) {
	if (i == arr.getsize()) return;
	displayArr_inReversedOrder(arr, i + 1);
	std::cout << arr.data[i] << " ";
	if (i == 0) std::cout << "\n";
}

int sumofPositiveNums(DynamicArray& arr, int i) {
	if (i == arr.getsize()) return 0;
	if (arr.data[i] > 0) return arr.data[i] + sumofPositiveNums(arr, i + 1);
	return sumofPositiveNums(arr, i + 1);
}


int cntDinstictValue(DynamicArray& arr, int i) {
	if (i == arr.getsize()) return 0;
	bool occured = false;

	for (int j = 0; j < i; ++j) {
		if (arr.data[j] == arr.data[i]) {
			occured = true;
			break;
		}
	}

	if (!occured) return 1 + cntDinstictValue(arr, i + 1);
	else return cntDinstictValue(arr, i + 1);
}
