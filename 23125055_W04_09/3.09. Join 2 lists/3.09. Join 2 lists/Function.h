#pragma once
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* pNext;
};

void InputLinkedList(Node*& pHead);
void displayLinkedList(Node*& pHead);
void deleteList(Node*& pHead);
void Join(Node*& ans, Node*& pH1, Node*& pH2);
/*
23125055
Nguyen Hoang Gia Han
23TT1

Test case 1
Input: 
4 6 9 0
-5 -8 -10 0
Output: 
4 6 9 -5 -8 -10 0

Test case 2
Input: 
5 0
-1 0
Output: 
5 -1 0

Test case 2
Input: 
0
1 2 0
Output:
1 2 0
*/
