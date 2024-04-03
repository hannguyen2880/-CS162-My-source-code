#pragma once

void printSolution(int n, int* trace, int& nSols);
void backtrack(int row, int n, bool* colFlag, bool* pDiaFlag, bool* sDiaFlag, int* trace, int& nSols);

/*
23125055
Nguyen Hoang Gia Han
23TT1

Test case
Input: 4
Output:
Solution 1:
(0, 1)
(1, 3)
(2, 0)
(3, 2)

Solution 2:
(0, 2)
(1, 0)
(2, 3)
(3, 1)
*/