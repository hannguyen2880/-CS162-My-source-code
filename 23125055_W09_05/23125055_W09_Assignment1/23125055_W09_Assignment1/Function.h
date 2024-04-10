#pragma once
#include <fstream>
#include <iostream>
using namespace std;

void saveBinFile(ofstream& fout, int* arr, int& n);
int findMedian(ifstream& fin, int* arr, int n);
