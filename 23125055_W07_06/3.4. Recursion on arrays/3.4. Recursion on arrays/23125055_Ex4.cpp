#include <iostream>
using namespace std;
#include "DynamicArray.h"
#include "Function.h"

int main() {
	DynamicArray arr;
	cout << "Press:\n";
	cout << "1. If you want to push back a value into your array.\n";
	cout << "2. If you want to output all the integers.\n";
	cout << "3. If you want to output all the integers in reversed order.\n";
	cout << "4. To know the sum of positive numbers in your array.\n";
	cout << "5. Count all distinct values in the array.\n";
	cout << "Or you can press 0 to exist the program.\n";
	cout << "Your choice is: ";
	int choice; cin >> choice;

	while (true) {
		while (choice < 0 || choice > 5) {
			cout << "Invalid input. Please choose a number in the interval [0; 5].\n";
			cin >> choice;
		}
		if (choice == 0) return 0;

		switch (choice)
		{
		case 1: {
			cout << "Input an integer you want to push in: ";
			int x; cin >> x;
			arr.push_back(x);
			break;
		}
		case 2: {
			cout << "Your array is: ";
			displayArr(arr, 0);
			break;
		}
		case 3: {
			cout << "Your array in reversed order is: ";
			displayArr_inReversedOrder(arr, 0);
			break;
		}
		case 4: {
			cout << "The sum is: " << sumofPositiveNums(arr, 0) << endl;
			break;
		}
		case 5: {
			cout << "The number of all distinct values in the array is: " << cntDinstictValue(arr, 0) << endl;
			break;
		}
		default:
			break;
		}
		cout << "-----------------------------------------\n";
		cout << "What's your next choice: ";
		cin >> choice;
	}
	return 0;
}