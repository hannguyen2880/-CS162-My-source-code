#include "Function.h"
#include <fstream>
#include <iostream>
using namespace std;

int cmp(Day& a, Day& b) {
	if (a.year != b.year) return (a.year < b.year ? -1 : 1);
	if (a.month != b.month) return (a.month < b.month ? -1 : 1);
	if (a.date != b.date) return (a.date < b.date ? -1 : 1);
	return 0;
}

void saveDaytoBinFile(ofstream& file, Day* days, int& n) {
	cout << "Enter number of days: ";
	cin >> n;
	days = new Day[n];
	cout << "Input " << n << " days line by line in type: dd mm yyyy\n";
	for (int i = 0; i < n; ++i) {
		cin >> days[i].date >> days[i].month >> days[i].year;
	}
	file.write((char*)&n, 4);
	file.write((char*)days, sizeof(Day) * n);
	cout << "Save successfully.\n";
}

Day loadBinFile_andSolve(ifstream& file, Day* days, int& n) {
	file.read((char*)&n, 4);
	days = new Day[n];
	file.read((char*)days, sizeof(Day) * n);

	int ansPos = 0;
	for (int i = 0; i < n; ++i) {
		if (cmp(days[ansPos], days[i]) != 1) ansPos = i;
	}
	return days[ansPos];
}