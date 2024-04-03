#include "Function.h"
#include <iostream>

const int dx[] = { 2, 2, -2, -2, 1, 1, -1, -1 };
const int dy[] = { 1, -1, 1, -1, 2, -2, 2, -2 };

void printSolution(int** board, int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) std::cout << board[i][j] << " ";
		std::cout << "\n";
	}
}

bool inBoard(int x, int y, int n) {
	return (x >= 0 && x < n && y >= 0 && y < n);
}
bool kightTour(int nsteps, int row, int col, int n, int** board) {
	if (nsteps == n * n) return true;

	for (int i = 0; i < 8; ++i) {
		int x = row + dx[i];
		int y = col + dy[i];
		
		if (!inBoard(x, y, n)) continue;

		if (board[x][y] != 0) continue;
		board[x][y] = nsteps + 1;
		if (kightTour(nsteps + 1, x, y, n, board)) return true;
		board[x][y] = 0;
	}
	return false;
}