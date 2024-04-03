#include "Function.h"
#include <iostream>

void printSolution(int n, int* trace, int& nSols) {
	std::cout << "Solution " << nSols << ":\n";
	for (int row = 0; row < n; ++row) {
		std::cout << "(" << row << ", " << trace[row] << ")\n";
	}
	std::cout << "\n";
}

void backtrack(int row, int n, bool* colFlag, bool* pDiaFlag, bool* sDiaFlag, int* trace, int& nSols) {
	if (row == n) printSolution(n, trace, ++nSols);

	for (int col = 0; col < n; ++col) {
		if (colFlag[col] || pDiaFlag[col - row + n - 1] || sDiaFlag[n * 2 - row - col - 2]) continue;
		trace[row] = col;
		colFlag[col] = true;
		pDiaFlag[col - row + n - 1] = true;
		sDiaFlag[n * 2 - row - col - 2] = true;

		backtrack(row + 1, n, colFlag, pDiaFlag, sDiaFlag, trace, nSols);

		colFlag[col] = false;
		pDiaFlag[col - row + n - 1] = false;
		sDiaFlag[n * 2 - row - col - 2] = false;
	}
}