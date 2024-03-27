#include <iostream>
#include <string>
using namespace std;
#include "Function.h"

int main() {	
	int decNum;
	string binNum;

	cout << "Press 1, if you want to convert a decimal number to a binary number.\n";
	cout << "Press 2, if you want to convert a binary number to a decimal number.\n";
	cout << "Choose one: ";
	int choice;
	cin >> choice;

	while (choice != 1 && choice != 2) {
		cout << "Choose your option again: ";
		cin >> choice;
	}
	while (true) {
		if (choice == 1) {
			cout << "Input an integer in decimal number: ";
			cin >> decNum;
			if (decNum == 0) cout << 0 << endl;
			else cout << "Converted number: " << decimal2Binary(decNum) << "\n";
		}
		else if (choice == 2) {
			cout << "Input an integer in binary number: ";
			cin >> binNum;
			cout << "Converted number: " << binary2Decimal(binNum) << "\n";
		}

		cout << "Choose 1 or 2 if you want to continue converting; otherwise, press 0 to stop\n";
		cin >> choice;
		if (choice == 0) return 0;
	}
	return 0;
}