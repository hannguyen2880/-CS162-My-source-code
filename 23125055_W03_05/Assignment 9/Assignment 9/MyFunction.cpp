#include <iostream>
using namespace std;
#include "MyFunction.h"

void input2DArray(int**& arr, int& n, int& m) {
	arr = new int* [n];
	for (int i = 0; i < n; ++i) {
		arr[i] = new int[m];
	}

	for (int i = 0; i < n; ++i) {
		cout << "Input the food eaten by monkey " << i + 1 << " for each day in a week\n";
		for (int j = 0; j < m; ++j) cin >> arr[i][j];
	}
}

void display2DArray(int**& arr, int& n, int& m) {
	cout << "Your current array is:\n";
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) cout << arr[i][j] << " ";
		cout << endl;
	}
}

void outputAverageFood(int**& arr, int& n) {
	cout << "\nThe average amount of food eaten per day by the whole family of monkeys is:\n";
	for (int j = 0; j < 7; ++j) {
		int total = 0;
		for (int i = 0; i < n; ++i) total += arr[i][j];
		cout << "Day " << j + 1 << ": " << 1.0 * total / n << endl;
	}
}

void outputLeastFoodinWeek(int**& arr, int& n) {
	cout << "\nThe least amount of food eaten during the week by any one monkey.\n";
	for (int i = 0; i < n; ++i) {
		int minFood = arr[i][0];
		for (int j = 0; j < 7; ++j) {
			if (minFood > arr[i][j]) minFood = arr[i][j];
		}
		cout << "The monkey " << i + 1 << ": " << minFood << endl;
	}
}

void outputGreatestFoodinWeek(int**& arr, int& n) {
	cout << "\nThe greatest amount of food eaten during the week by any one monkey.\n";
	for (int i = 0; i < n; ++i) {
		int maxFood = arr[i][0];
		for (int j = 0; j < 7; ++j) {
			if (maxFood < arr[i][j]) maxFood = arr[i][j];
		}
		cout << "The monkey " << i + 1 << ": " << maxFood << endl;
	}
}

void delete2DArr(int**& arr, int& n) {
	for (int i = 0; i < n; ++i) delete[] arr[i];
	delete[] arr;
}
