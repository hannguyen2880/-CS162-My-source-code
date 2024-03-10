#include <iostream>
using namespace std;
#include "MyFunction.h"

int main() {
	cout << "Input the number of monkeys: ";
	int** arr, n, m = 7;
	cin >> n;
	input2DArray(arr, n, m);
	cout << "\nMy answer for all requirement.\n";
	outputAverageFood(arr, n);
	outputLeastFoodinWeek(arr, n);
	outputGreatestFoodinWeek(arr, n);
	
	delete2DArr(arr, n);
	return 0;
}