#include <iostream>
using namespace std;

#include "Function.h"

int main() {
	cout << "What's size of your chessboard?: ";
	int n;
	cin >> n;

	cout << "The position of " << n << " queens in your board is:\n";

	bool* colFlag = new bool[n];
	bool* pDiaFlag = new bool[n * 2 - 1];
	bool* sDiaFlag = new bool[n * 2 - 1];
	int* trace = new int[n];
	for (int i = 0; i < n; ++i) colFlag[i] = false;
	for (int i = 0; i < n * 2 - 1; ++i) {
		pDiaFlag[i] = false;
		sDiaFlag[i] = false;
	}

	int nSols = 0;
	// void backtrack(int row, int n, bool* colFlag, bool* pDiaFlag, bool* sDiaFlag, bool& found, int* trace);
	backtrack(0, n, colFlag, pDiaFlag, sDiaFlag, trace, nSols);
	if (!nSols) cout << "Cannot find any solutions.";
	delete[] trace;
	delete[] colFlag;
	delete[] pDiaFlag;
	delete[] sDiaFlag;
	return 0;
}