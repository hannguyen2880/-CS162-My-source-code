#include <iostream>
#include "MyFunction.h"
using namespace std;

void inputArray(int*& arr, int& n) {
	cout << "Input the number of integer in your array: ";
	cin >> n;
	arr = new int[n];
	cout << "Input " << n << " integers in your array.\n";
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
}

int findMode(int*& arr, int& n) {
	if (n <= 0) return -1;
	
	int maxValue = -1;

	for (int i = 0; i < n; ++i) {
		if (maxValue < *(arr + i)) maxValue = *(arr + i);
	}
	int* freq = new int[maxValue + 1];
	for (int i = 0; i <= maxValue; ++i) {
		*(freq + i) = 0;
	}
	for (int i = 0; i < n; ++i) {
		++(*(freq + *(arr + i)));
	}

	int maxFreq = -1, mode = -1;

	for (int i = 0; i <= maxValue; ++i) {
		if (*(freq + i) > 1 && maxFreq < *(freq + i)) {
			maxFreq = *(freq + i);
			mode = i;
		}
	}
	delete[] freq;
	return mode;
}