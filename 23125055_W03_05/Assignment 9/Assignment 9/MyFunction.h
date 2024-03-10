#pragma once
void input2DArray(int**& arr, int& n, int& m);
void display2DArray(int**& arr, int& n, int& m);
void outputAverageFood(int**& arr, int& n);
void outputLeastFoodinWeek(int**& arr, int& n);
void outputGreatestFoodinWeek(int**& arr, int& n);
void delete2DArr(int**& arr, int& n);
/*
23125055
Nguyen Hoang Gia Han
23TT1

Test case 1
Input:
5
2 5 10 2 3 6 7
2 3 4 5 10 11 12
10 5 4 5 7 9 10
20 21 45 2 3 4 5
9 8 5 11 17 14 13
Output:
The average amount of food eaten per day by the whole family of monkeys is:
Day 1: 8.6
Day 2: 8.4
Day 3: 13.6
Day 4: 5
Day 5: 8
Day 6: 8.8
Day 7: 9.4

The least amount of food eaten during the week by any one monkey.
The monkey 1: 2
The monkey 2: 2
The monkey 3: 4
The monkey 4: 2
The monkey 5: 5

The greatest amount of food eaten during the week by any one monkey.
The monkey 1: 10
The monkey 2: 12
The monkey 3: 10
The monkey 4: 45
The monkey 5: 17
------------

Test case 2
Input:
3
1 2 3 4 1 3 4
4 5 3 5 9 7 5
6 7 5 3 10 11 12
Output:
The average amount of food eaten per day by the whole family of monkeys is:
Day 1: 3.66667
Day 2: 4.66667
Day 3: 3.66667
Day 4: 4
Day 5: 6.66667
Day 6: 7
Day 7: 7

The least amount of food eaten during the week by any one monkey.
The monkey 1: 1
The monkey 2: 3
The monkey 3: 3

The greatest amount of food eaten during the week by any one monkey.
The monkey 1: 4
The monkey 2: 9
The monkey 3: 12
-------------

Test case 3
Input:
6
40 50 43 20 10 100 101
5 6 10 11 12 5 4
550 4 5 340 551 667 19
5 6 4 10 3 5 4
6 10 11 12 9 6 7
10 11 12 9 8 7 6
Output:
The average amount of food eaten per day by the whole family of monkeys is:
Day 1: 102.667
Day 2: 14.5
Day 3: 14.1667
Day 4: 67
Day 5: 98.8333
Day 6: 131.667
Day 7: 23.5

The least amount of food eaten during the week by any one monkey.
The monkey 1: 10
The monkey 2: 4
The monkey 3: 4
The monkey 4: 3
The monkey 5: 6
The monkey 6: 6

The greatest amount of food eaten during the week by any one monkey.
The monkey 1: 101
The monkey 2: 12
The monkey 3: 667
The monkey 4: 10
The monkey 5: 12
The monkey 6: 12
*/