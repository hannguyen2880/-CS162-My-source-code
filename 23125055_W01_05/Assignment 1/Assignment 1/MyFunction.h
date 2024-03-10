#pragma once
#include <fstream>
using namespace std;

struct Date {
	int y, m, d;
};

int compare(Date& a, Date& b); // return -1 if a < b; 1 if a > b; otherwise 0
void Sort(Date arrs[], int& n);

void inputFileDate(Date& date, ifstream& file);
void outputFileDateArrs(Date arrs[], int& n, ofstream& file);