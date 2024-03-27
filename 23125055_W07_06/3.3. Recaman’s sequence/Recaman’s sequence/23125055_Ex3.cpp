#include <iostream>
using namespace std;
#include "Function.h"

int main() {
	cout << "Input an integer: ";
	int n;
	cin >> n;
	cout << "The first " << n << " elements of Recaman's Sequence are:\n";
	int* sequence = new int[n];
	bool* used = new bool[2000001];

	for (int i = 0; i < 2000001; ++i) used[i] = false;
	int temp = generateNthElements(sequence, used, n);

	for (int i = 0; i < n; ++i) cout << sequence[i] << " ";
	return 0;
}