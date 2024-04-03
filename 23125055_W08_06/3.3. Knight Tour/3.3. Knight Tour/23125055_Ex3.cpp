#include <iostream>
using namespace std;

#include "Function.h"

int main() {
	cout << "What's size of the chessboard?: ";
	int n, row, col;
	cin >> n;

	cout << "What's your current position: ";
	cin >> row >> col;

	int** board = new int* [n];
	for (int i = 0; i < n; ++i) {
		board[i] = new int[n];

		for (int j = 0; j < n; ++j) {
			board[i][j] = 0;
		}
	}

	board[row][col] = 1;
	if (kightTour(1, row, col, n, board)) printSolution(board, n);
	else cout << "Cannot find any ways.\n";
	return 0;
}