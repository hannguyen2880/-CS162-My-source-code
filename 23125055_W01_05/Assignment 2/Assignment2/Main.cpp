#include <iostream>
#include <fstream>
#include "Student.h"
using namespace std;
const int N = 1e6 + 2;
Student studentArrs[N];

int main() {
	ifstream fin;
	ofstream fout;

	fin.open("input.txt");
	if (fin.is_open()) {
		int n;
		cout << "Input an array of students from file: input.txt.\n";
		inputFile_StudentArrs(studentArrs, n, fin);

		
		fout.open("honors.txt");
		if (fout.is_open()) {
			cout << "Go to the output file to see the result.\n";
			outputFile_TopStudent(studentArrs, n, fout);
		}
		else cout << "Cannot open the output file!";
		fout.close();
		
	}
	else cout << "Cannot open the input file!";
	fin.close();
	return 0;
}