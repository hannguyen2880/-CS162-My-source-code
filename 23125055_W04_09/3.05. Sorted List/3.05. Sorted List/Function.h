#pragma once
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* pNext;
};

void InpuLinkedList(Node*& pHead);
void displayLinkedList(Node*& pHead);
void deleteList(Node*& pHead);
void SortedList(Node*& pHead, int x);

/*
23125055
Nguyen Hoang Gia Han
23TT1

Test case 1
Input: 
10
13 17 20 21 0
Output: 10 13 17 20 21 0

Test case 2
Input: 
20
11 12 15 15 0
Output: 11 12 15 15 20 0

Test case 2
Input:
20
18 18 19 20 20 23 24 30 0
Output: 18 18 19 20 20 20 23 24 30 0
*/
