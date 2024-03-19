#pragma once
struct Node {
	int data;
	Node* pNext;
};

void inputList(Node*& pHead);
void displayListinReverseOrder1(Node*& pHead);
void displayListinReverseOrder2(Node*& pHead);
