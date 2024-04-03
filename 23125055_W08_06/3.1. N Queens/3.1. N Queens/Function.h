#pragma once

void printSolution(int n, int* trace);
void backtrack(int row, int n, bool* colFlag, bool* pDiaFlag, bool* sDiaFlag, bool& found, int* trace);

/*
23125055
Nguyen Hoang Gia Han
23TT1

Test case
Input: 5
Output:
The position of 5 queens in your board is:
(0, 0)
(1, 2)
(2, 4)
(3, 1)
(4, 3)
*/