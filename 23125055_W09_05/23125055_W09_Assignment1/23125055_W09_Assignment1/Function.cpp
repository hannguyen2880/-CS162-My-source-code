#include "Function.h"
#include <fstream>

void saveBinFile(ofstream& fout, int* arr, int& n) {
	fout.write((char*) &n, 4);
	fout.write((char*)arr, n * 4);
}

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
int findMedian(ifstream& fin, int* arr, int n) {
	fin.read((char*)&n, 4);
	arr = new int[n];
	fin.read((char*)arr, n * 4);

	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (arr[j] < arr[i]) swap(arr[j], arr[i]);
		}
	}
	if (n % 2 == 1) return arr[n / 2];
	return arr[n / 2 - 1];
}