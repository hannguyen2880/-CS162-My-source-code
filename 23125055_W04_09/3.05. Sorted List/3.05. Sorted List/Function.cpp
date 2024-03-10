#include "Function.h"

void InpuLinkedList(Node*& pHead) {
	cout << "Input your list: ";
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

void displayLinkedList(Node*& pHead) {
	cout << "Our list: ";
	Node* cur = pHead;
	for (; cur != nullptr; cur = cur->pNext) {
		cout << cur->data << " ";
	}
	cout << 0 << endl;
}

void deleteList(Node*& pHead) {
	while (pHead != nullptr) {
		Node* temp = pHead->pNext;
		delete pHead;
		pHead = temp;
	}
}


void SortedList(Node*& pHead, int x) {
	if (!pHead) return;
	if (x <= pHead->data) {
		Node* temp = new Node;
		temp->data = x;
		temp->pNext = pHead;
		pHead = temp;
		return;
	}
	Node* cur = pHead;
	while (cur->pNext) {
		if (cur->data <= x && x <= cur->pNext->data) {
			Node* temp = new Node;
			temp->data = x;
			temp->pNext = cur->pNext;
			cur->pNext = temp;
			return;
		}
		cur = cur->pNext;
	}
	Node* temp = new Node;
	temp->data = x;
	temp->pNext = nullptr;
	cur->pNext = temp;
}