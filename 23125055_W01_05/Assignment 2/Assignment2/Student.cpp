#include <fstream>
#include <iostream>
#include "Student.h"
using namespace std;

void inputFile_StudentArrs(Student list[], int& n, ifstream& file) {
	file >> n;
	for (int i = 0; i < n; ++i) {
		file >> list[i].id;
		file.get();
		file.get(list[i].fullname, 1000, '\n');
		file.get();
		file >> list[i].gpa;
	}
}
void outputFileStudent(Student& s, ofstream& file) {
	file << "Student ID: " << s.id << endl;
	file << "Full name: " << s.fullname << endl;
	file << "GPA: " << s.gpa << endl;
}

void getMax(double& a, double& b) {
	if (a < b) a = b;
}
void outputFile_TopStudent(Student list[], int& n, ofstream& file) {
	file << "Top best-GPA students are: " << endl;

	double bestGPA = 0;
	for (int i = 0; i < n; ++i) {
		getMax(bestGPA, list[i].gpa);
	}

	file << "The best GPA of the arrays of students is: " << bestGPA << endl;
	for (int i = 0; i < n; ++i) {
		if (list[i].gpa == bestGPA) {
			outputFileStudent(list[i], file);
		}
	}
}