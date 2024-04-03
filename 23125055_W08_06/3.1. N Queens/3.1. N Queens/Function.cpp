#include "Function.h"
#include <iostream>

void printSolution(int n, int* trace) {
	for (int row = 0; row < n; ++row) {
		std::cout << "(" << row << ", " << trace[row] << ")\n";
	}
}

void backtrack(int row, int n, bool* colFlag, bool* pDiaFlag, bool* sDiaFlag, bool& found, int* trace) {
	if (found) return;
	if (row == n) {
		printSolution(n, trace);
		found = true;
		return;
	}

	for (int col = 0; col < n; ++col) {
		if (colFlag[col] || pDiaFlag[col - row + n - 1] || sDiaFlag[n * 2 - row - col - 2]) continue;
		trace[row] = col;
		colFlag[col] = true;
		pDiaFlag[col - row + n - 1] = true;
		sDiaFlag[n * 2 - row - col - 2] = true;

		backtrack(row + 1, n, colFlag, pDiaFlag, sDiaFlag, found, trace);

		colFlag[col] = false;
		pDiaFlag[col - row + n - 1] = false;
		sDiaFlag[n * 2 - row - col - 2] = false;
	}
}