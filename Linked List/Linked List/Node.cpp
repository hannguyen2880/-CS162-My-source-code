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

void deleteList(Node*& pHead) {
	while (pHead != nullptr) {
		Node* temp = pHead->pNext;
		delete pHead;
		pHead = temp;
	}
}

void displayList(Node*& pHead) {
	cout << "Our list: ";
	Node* cur = pHead;
	for (; cur != nullptr; cur = cur->pNext) {
		cout << cur->data << " ";
	}
}

// Insert X after the node having the data value K; if K exists, insert the first time.
void insertXAfterK(Node* pHead, int x, int k) {
	// Note: if pHead is null pointer -> the program may crash!!! -> make sure to check that case!
	Node* pCur = pHead;
	while (pCur != nullptr) {
		if (pCur->data == k) {
			Node* temp = pCur->pNext;
			pCur->pNext = new Node;
			pCur->pNext->data = x;
			pCur->pNext->pNext = temp;
			return;
		}
		pCur = pCur->pNext;
	}
}

void InsertXBeforeK(Node*& pHead, int x, int k) {
	if (pHead == nullptr) return;
	if (pHead->data == k) {
		Node* temp = new Node;
		temp->data = x;
		temp->pNext = pHead;
		pHead = temp;
		return;
	}

	for (Node* cur = pHead; cur->pNext != nullptr; cur = cur->pNext) {
		if (cur->pNext->data == k) {
			Node* temp = new Node;
			temp->data = x;
			temp->pNext = cur->pNext;
			cur->pNext = temp;
			return;
		}
	}
}

void delete1stK(Node*& pHead, int k) {
	if (pHead == nullptr) return;

	if (pHead->data == k) {
		pHead = pHead->pNext;
		return;
	}

	Node* cur = pHead;
	while (cur->pNext != nullptr) {
		if (cur->pNext->data == k) {
			cur->pNext = cur->pNext->pNext;
			return;
		}
		cur = cur->pNext;
	}
}

void deleteAllK(Node*& pHead, int k) {
	// what if do not have the else (see in the capture picture in the Iphone).
	if (pHead == nullptr) return;

	if (pHead->data == k) {
		pHead = pHead->pNext;
		//return;
	}

	Node* cur = pHead;
	while (cur->pNext != nullptr) {
		if (cur->pNext->data == k) {
			cur->pNext = cur->pNext->pNext;
			//return;
		}
		else cur = cur->pNext;
	}
}

// find X in an ordered list
Node* findX(Node* pHead, int x) {
	Node* cur = pHead;
	while (cur != nullptr && cur->data < x) cur = cur->pNext;
	if (cur != nullptr && cur->data == x) return cur;
	return nullptr;
}

void mergeOderedList(Node*& pOH1, Node*& pOH2, Node*& pOH3) {
	pOH3 = new Node;
	Node* cur = pOH3;

	while (pOH1 && pOH2) {
		if (pOH1->data < pOH2->data) {
			cur->pNext = pOH1;
			pOH1 = pOH1->pNext;
		}
		else {
			cur->pNext = pOH2;
			pOH2 = pOH2->pNext;
		}
		cur = cur->pNext;
	}

	if (pOH1) {
		cur->pNext = pOH1;
		pOH1 = nullptr;
	}
	else {
		cur->pNext = pOH2;
		pOH2 = nullptr;
	}

	Node* tmp = pOH3;
	pOH3 = pOH3->pNext;
	delete tmp;
}

void removeDuplicate(Node*& pHead) {
	Node* cur = pHead;
	while (cur) {
		Node* next = cur;
		while (next->pNext) {
			if (next->pNext->data == cur->data) {
				// remove Node next->pNext
				Node* tmp = next->pNext;
				next->pNext = next->pNext->pNext;
				delete tmp;
			}
			else next = next->pNext;
		}
		cur = cur->pNext;
	}
}