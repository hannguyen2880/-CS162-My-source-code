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
void deleteAllX(Node*& pHead, int x);
void deleteList(Node*& pHead);
/*
23125055
Nguyen Hoang Gia Han
23TT1

Test case 1
Input: 
5 7 10 9 7 8 7 10 15 0
7
Output: 5 10 9 8 10 15 0

Test case 2
Input:
6 7 10 6 0
5
Output: 6 7 10 6 0

Test case 3
Input: 
7 8 4 5 7 7 0
7
Output: 8 4 5 0
*/
