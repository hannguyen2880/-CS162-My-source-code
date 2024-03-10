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
void deleteList(Node*& pHead);
void insertEvenNums(Node*& pHead);

/*
23125055
Nguyen Hoang Gia Han
23TT1

Test case 1
Input: 1 2 2 4 2 6 0
Output: 2 1 4 2 6 2 8 4 10 2 12 6 0

Test case 2
Input: 5 10 0
Output: 2 5 4 10 0

Test case 2
Input: 3 0
Output: 2 3 0
*/