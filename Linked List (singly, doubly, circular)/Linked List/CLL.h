#pragma once

struct Node {
	int data;
	Node* pNext;
};

void inputList(Node*& pHead);
Node* findX(Node* pFirst, int x);
void remove1stX(Node*& pFirst, int x);
void removeAllXs(Node*& pFirst, int x);
void displayList(Node*& pHead);
void removeBasedOnK(Node*& pHead, int k);
