#include <fstream>
#include <iostream>
using namespace std;

#include "Function.h"

int main() {
	cout << "Press:\n";
	cout << "1. User enters an array of integers from keyboard. The program will save the array to a binary file.\n";
	cout << "2. User loads an array of integers from a binary file. The program will find the median and output to console.\n";
	cout << "Or you can press 0 to exit.\n";
	cout << "What's your choice?: ";
	int choice; cin >> choice;
	
	while (true) {
		if (choice == 0) break;
		if (choice == 1) {
			ofstream fout;
			fout.open("input.bin", ios::binary);
			cout << "Number of integers: ";
			
			int n; cin >> n;
			int* arr = new int[n];
			for (int i = 0; i < n; ++i) cin >> arr[i];
			saveBinFile(fout, arr, n);
			delete[] arr;
			fout.close();
		}
		else if (choice == 2) {
			ifstream fin;
			fin.open("input.bin", ios::binary);
			int n = 0;
			int* arr = nullptr;
			cout << findMedian(fin, arr, n) << "\n";
			fin.close();
		}
		else {
			cout << "Invalid choice.\n";
		}
		cout << "What's your next choice?: ";
		cin >> choice;
	}
	return 0;
}