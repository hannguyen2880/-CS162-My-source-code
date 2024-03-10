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
void SumOfList(Node*& pHead, Node*& newList);

/*
23125055
Nguyen Hoang Gia Han
23TT1

Test case 1
Input: 2 -3 4 5 6 0
Output: 2 -3 4 5 6 0

Test case 2
Input: 1 2 3 4 0
Output: 1 3 6 10 0

Test case 2
Input: 10 20 -30 40 -2 0
Output: 10 30 0 40 38 0
*/
