#include <iostream>
using namespace std;

#include "Function.h"

int main() {
	cout << "Input N: ";
	int n; cin >> n;
	int* arr = new int[n];
	bool* used = new bool[n];
	for (int i = 0; i < n; ++i) used[i] = false;

	backtracking(0, n, arr, used);
	return 0;
}