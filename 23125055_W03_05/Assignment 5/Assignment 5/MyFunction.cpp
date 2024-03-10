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

double findMedian(int*& arr, int& n) {
	if (n % 2 == 1) return *(arr + (n / 2));
	return 1.0 * (*(arr + (n / 2)) + *(arr + (n / 2 - 1))) / 2;
}