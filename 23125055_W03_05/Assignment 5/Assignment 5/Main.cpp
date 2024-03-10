#include <iostream>
using namespace std;
#include "MyFunction.h"

int main() {
	cout << "This program will find the median of an array. This value will be returned as a double.\n";
	int* arr, n;
	inputArray(arr, n);
	double ans = findMedian(arr, n);
	cout << "The median of this array is: ";
	if (ans == (int)ans) cout << ans << ".0";
	else cout << ans;
	delete[] arr;
	return 0;
}