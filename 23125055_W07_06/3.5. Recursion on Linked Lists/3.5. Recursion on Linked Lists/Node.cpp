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
	cout << "\n";
}

void searchAnElement(Node*& pHead, int x, int curpos, int& pos) {
	if (!pHead) return;
	if (pHead->data == x) {
		pos = curpos;
		return;
	}
	searchAnElement(pHead->pNext, x, curpos + 1, pos);
}

void reverseList(Node*& pHead, Node*& p) {
	if (!p) return;
	if (!p->pNext) {
		pHead = p;
		return;
	}
	reverseList(pHead, p->pNext);

	Node* temp = p->pNext;
	temp->pNext = p;
	p->pNext = nullptr;
}

Node* findMiddle(Node*& pHead, Node* slow, Node* fast) {
	if (!pHead || !pHead->pNext) return pHead;
	
	if (!slow) {
		slow = pHead;
		fast = pHead->pNext;
	}
	if (!fast) return slow;
	if (!fast->pNext) return slow->pNext;
	
	return findMiddle(pHead, slow->pNext, fast->pNext->pNext);
}

void deleteX(Node*& pHead, int& x) {
	if (!pHead) return;
	
	if (pHead->data == x) {
		Node* temp = pHead;
		pHead = pHead->pNext;
		delete temp;
		deleteX(pHead, x);
	}
	else deleteX(pHead->pNext, x);
}

void removeDuplicate(Node*& pHead) {
	if (!pHead) return;
	removeDuplicate(pHead->pNext);

	if (pHead->pNext && pHead->pNext->data == pHead->data) {
		Node* temp = pHead->pNext;
		delete pHead;
		pHead = temp;
	}
}