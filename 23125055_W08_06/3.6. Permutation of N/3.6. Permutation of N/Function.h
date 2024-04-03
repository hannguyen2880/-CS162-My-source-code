#pragma once

void printout(int* arr, int& n);
void backtracking(int i, int& n, int* arr, bool* used);

/*
23125055
Nguyen Hoang Gia Han
23TT1

Test case 1
Input: 4
Output: 
1 2 3 4
1 2 4 3
1 3 2 4
1 3 4 2
1 4 2 3
1 4 3 2
2 1 3 4
2 1 4 3
2 3 1 4
2 3 4 1
2 4 1 3
2 4 3 1
3 1 2 4
3 1 4 2
3 2 1 4
3 2 4 1
3 4 1 2
3 4 2 1
4 1 2 3
4 1 3 2
4 2 1 3
4 2 3 1
4 3 1 2
4 3 2 1
*/