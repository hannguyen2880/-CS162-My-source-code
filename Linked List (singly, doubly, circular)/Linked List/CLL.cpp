#include "CLL.h"
#include <iostream>
using namespace std;

void inputList(Node*& pHead) {
	int x;
	cin >> x;

	Node* cur = new Node;
	while (x != 0) {
		if (pHead == nullptr) {
			pHead = new Node;
			cur = pHead;
		}
		else {
			cur->pNext = new Node;
			cur = cur->pNext;
		}
		cur->data = x;
		cur->pNext = nullptr;
		cin >> x;
	}
	cur->pNext = pHead;
}

Node* findX(Node* pFirst, int x) {
	if (pFirst == nullptr) return nullptr;
	Node* cur = pFirst;
	while (cur->data != x && cur->pNext != pFirst) {
		cur = cur->pNext;
	}
	if (cur->data == x) return cur;
	return nullptr;
}

void remove1stX(Node*& pFirst, int x) {
	if (!pFirst) return;
	if (pFirst->data == x) {
		Node* pLast = pFirst;
		while (pLast->pNext != pFirst) pLast = pLast->pNext;

		if (pLast == pFirst) { // our linked list has only one node
			delete pFirst;
			pFirst = nullptr;
			return;
		}

		pLast->pNext = pFirst->pNext;
		delete pFirst;
		pFirst = pLast->pNext;
		return;
	}


	Node* cur = pFirst;
	while (cur->pNext->data != x && cur->pNext->pNext != pFirst->pNext) cur = cur->pNext;

	if (cur->pNext->data == x) {
		Node* tmp = cur->pNext;
		cur->pNext = cur->pNext->pNext;
		delete tmp;
	}
}


void removeAllXs(Node*& pFirst, int x) {
	if (!pFirst) return;
	Node* cur = pFirst;

	while (cur->pNext != pFirst) { // cur isn't the last node
		if (cur->pNext->data == x) {
			Node* tmp = cur->pNext->pNext;
			delete cur->pNext;
			cur->pNext = tmp;
		}
		else cur = cur->pNext;
	}

	if (cur->pNext->data == x) {
		Node* tmp = cur->pNext->pNext;
		if (cur->pNext == pFirst) pFirst = tmp;
		if (pFirst->pNext == pFirst) pFirst = nullptr;
		delete cur->pNext;
		cur->pNext = tmp;
	}
}

void displayList(Node*& pHead) {
	cout << "Our list: ";
	Node* cur = pHead;
	cout << cur->data << " ";
	while (cur->pNext != pHead) {
		cur = cur->pNext;
		cout << cur->data << " ";
	}
}
/*
Homework:
Check if a linked list has any cycles, return true if it has, else return false if it's just a normal singly linked list.
*/
void removeBasedOnK(Node*& pHead, int k) {
	
}