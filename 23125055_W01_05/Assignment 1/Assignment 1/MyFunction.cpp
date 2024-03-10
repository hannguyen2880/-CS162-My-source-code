#include "MyFunction.h"
#include <fstream>
#include <iostream>
using namespace std;

int compare(Date& a, Date& b) {
	if (a.y > b.y) return 1;
	if (a.y < b.y) return -1;

	if (a.m > b.m) return 1;
	if (a.m < b.m) return -1;

	if (a.d > b.d) return 1;
	if (a.d < b.d) return -1;

	return 0;
}

void inputFileDate(Date& date, ifstream& file) {
	file >> date.y >> date.m >> date.d;
}

void outputFileDateArrs(Date arrs[], int& n, ofstream& file) {
	cout << "Go to the output file to see the result.\n";
	file << "Your array of dates you input in ascending order:\n";
	for (int i = 0; i < n; ++i) {
		file << arrs[i].y << " " << arrs[i].m << " " << arrs[i].d << endl;
	}
}

void giveValue(Date& ans, Date& d) { // ans = d;
	ans.y = d.y;
	ans.m = d.m;
	ans.d = d.d;
}

void swap(Date& a, Date& b) {
	Date tmp;
	giveValue(tmp, a);
	giveValue(a, b);
	giveValue(b, tmp);
}

void Sort(Date arrs[], int& n) {
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (compare(arrs[j], arrs[i]) == -1) swap(arrs[j], arrs[i]);
		}
	}
}