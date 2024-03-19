#include <iostream>
using namespace std;
#include "Function.h"

int main() {
	int decNum, binNum;
	string hexNum;

	cout << "Press:\n";
	cout << "1. To convert an unsigned integer from decimal base to binary base.\n";
	cout << "2. To convert an unsigned integer from binary base to decimal base.\n";
	cout << "3. To convert an unsigned integer from decimal base to hex base.\n";
	cout << "4. To convert an unsigned integer from hex base to decimal base.\n";
	cout << "Or you can press 0 to stop the program.\n";
	cout << "Your choice, please: ";
	int choice;
	cin >> choice;

	while (true) {
		if (choice == 1) {
			cout << "Input an unsigned integer in decimal base: ";
			cin >> decNum;
			decimal_to_binary(decNum, binNum);
			cout << "The converted integer: " << binNum << endl;
		}
		else if (choice == 2) {
			cout << "Input an unsigned integer in binary base: ";
			cin >> binNum;
			binary_to_decimal(binNum, decNum);
			cout << "The converted integer: " << decNum << endl;
		}
		else if (choice == 3) {
			cout << "Input an unsigned integer in decimal base: ";
			cin >> decNum;
			decimal_to_hex(decNum, hexNum);
			cout << "The converted integer: " << hexNum << endl;
		}
		else if (choice == 4) {
			cout << "Input an unsigned integer in hex base: ";
			cin >> hexNum;
			hex_to_decimal(hexNum, decNum);
			cout << "The converted integer: " << decNum << endl;
		}
		else if (choice == 0) return 0;
		else cout << "Your choice is not valid\n";

		cout << "Your next choice is (remember that you can press 0 to stop the program): ";
		cin >> choice;
	}
	
	return 0;
}