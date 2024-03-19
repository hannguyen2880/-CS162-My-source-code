#include <iostream>
using namespace std;
#include "Node.h"

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
}

void displayListinReverseOrder1(Node*& pHead) {
	if (pHead->pNext == nullptr) {
		cout << pHead->data << " ";
		return;
	}
	displayListinReverseOrder1(pHead->pNext);
	cout << pHead->data << " ";
}

