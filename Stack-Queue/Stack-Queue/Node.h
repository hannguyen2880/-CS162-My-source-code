#pragma once

struct Node {
	int data;
	Node* pNext;
};

void insertAtBeginning(Node*& pHead, int x);
//void insertAtEnd(Node*& pHead, int x);
bool removeAtBeginning(Node*& pHead, int& x);
void displayList(Node*& pHead);
