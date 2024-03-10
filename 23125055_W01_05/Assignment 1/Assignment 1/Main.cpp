#include <iostream>
#include <fstream>
using namespace std;

#include "MyFunction.h"
const int N = 2e6;
Date dateArrs[N];

int main() {
	ifstream fin;
	fin.open("input.txt");

	if (fin.is_open()) {
		int year, month, day, id = 0;
		while (1) {
			Date date;
			inputFileDate(date, fin);
			if (date.y == -1 && date.m == -1 && date.d == -1) break;
			dateArrs[id].y = date.y;
			dateArrs[id].m = date.m;
			dateArrs[id].d = date.d;
			++id;
		}

		Sort(dateArrs, id);
		ofstream fout;
		fout.open("output.txt");
		if (fout.is_open()) {
			outputFileDateArrs(dateArrs, id, fout);
		}
		else cout << "Cannot open the output file!";

		fout.close();
	}
	else cout << "Cannot open the input file!";
	fin.close();
	return 0;
}