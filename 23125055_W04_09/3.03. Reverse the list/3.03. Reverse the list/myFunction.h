#pragma once
#include <fstream>
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* pNext;
};
void InputFileLinkedList(Node*& pHead, ifstream& file);
void displayFileLinkedList(Node*& pHead, ofstream& file);
void reverseList(Node*& pHead);
void deleteList(Node*& pHead);

/*
23125055
Nguyen Hoang Gia Han
23TT1

Test case 1
Input: 1 2 3 4 5 0
Output: 5 4 3 2 1 0

Test case 2
Input: 1 0
Output: 1 0

Test case 3
Input: 23 26 20 0
Output: 20 26 23 0
*/
