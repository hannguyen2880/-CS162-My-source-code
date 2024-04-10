#pragma once
#include <fstream>
using namespace std;

struct Day {
	int date, month, year;
};

int cmp(Day& a, Day& b);
void saveDaytoBinFile(ofstream& file, Day* days, int& n);
Day loadBinFile_andSolve(ifstream& file, Day* days, int& n);

