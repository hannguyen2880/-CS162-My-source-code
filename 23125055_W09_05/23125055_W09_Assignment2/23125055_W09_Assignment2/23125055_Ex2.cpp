#include <iostream>
#include <fstream>
using namespace std;

#include "Function.h"

int main() {
	cout << "Press:\n";
	cout << "1. User enters an array of dates from keyboard. The program will save the array to a binary file..\n";
	cout << "2. User loads an array of dates from a binary file. The program will find the newest date and output to console..\n";
	cout << "Or you can press 0 to exit.\n";
	cout << "What's your choice?: ";
	int choice; cin >> choice;

	while (true) {
		if (choice == 0) break;
		if (choice == 1) {
			ofstream fout;
			fout.open("input.bin", ios::binary);
			int n;
			Day* days = nullptr;
			saveDaytoBinFile(fout, days, n);
			delete[] days;
			fout.close();
		}
		else if (choice == 2) {
			int n;
			Day* days = nullptr;
			ifstream fin;
			fin.open("input.bin", ios::binary);
			Day d = loadBinFile_andSolve(fin, days, n);
			cout << "The newest day is: " << d.date << "/" << d.month << "/" << d.year << "\n";
			delete[] days;
			fin.close();
		}
		else {
			cout << "Invalid option.\n";
		}

		cout << "What's next option: ";
		cin >> choice;
	}
	return 0;
}