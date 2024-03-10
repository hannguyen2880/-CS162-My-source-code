#pragma once
#include <fstream>
using namespace std;

struct Student {
	int id;
	char fullname[1000];
	double gpa;
};

void inputFile_StudentArrs(Student list[], int& n, ifstream& file);

void outputFileStudent(Student& s, ofstream& file);

void outputFile_TopStudent(Student list[], int& n, ofstream& file);
