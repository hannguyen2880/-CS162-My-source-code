#include <iostream>
#include "Function.h"

void printout(int* arr, int& n) {
	for (int i = 0; i < n; ++i) std::cout << arr[i] + 1 << " ";
	std::cout << "\n";
}
void backtracking(int i, int& n, int* arr, bool* used) {
	if (i == n) {
		printout(arr, n);
		return;
	}

	for (int j = 0; j < n; ++j) {
		if (used[j]) continue;
		used[j] = true;
		arr[i] = j;
		backtracking(i + 1, n, arr, used);
		used[j] = false;
	}
}