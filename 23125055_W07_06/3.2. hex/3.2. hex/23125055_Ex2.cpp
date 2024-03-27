#include <iostream>
using namespace std;
#include "Function.h"

int main() {
	int decNum;
	string hexNum;

	cout << "Press 1, if you want to convert a decimal number to a hex number.\n";
	cout << "Press 2, if you want to convert a hex number to a decimal number.\n";
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
			cout << "Converted number: " << (decNum == 0 ? 0 : decimal2Hex(decNum)) << "\n";
		}
		else if (choice == 2) {
			cout << "Input an integer in hex base number: ";
			cin >> hexNum;
			cout << "Converted number: " << hex2Decimal(hexNum) << "\n";
		}

		cout << "Choose 1 or 2 if you want to continue converting; otherwise, press 0 to stop\n";
		cin >> choice;
		if (choice == 0) return 0;
	}
	return 0;
}