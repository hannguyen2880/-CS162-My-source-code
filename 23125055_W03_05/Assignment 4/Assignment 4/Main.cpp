#include <iostream>
#include "MyFunction.h"
using namespace std;

int main() {
	cout << "This program is to find the mode of an array. If that array has no mode, -1 will be printed out.\n";
	int* arr, n;
	inputArray(arr, n);
	cout << "The answer is: " << findMode(arr, n);
	delete[] arr;
	return 0;
}