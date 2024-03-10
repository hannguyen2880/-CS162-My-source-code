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


void SumOfList(Node*& pHead, Node*& newList) {
	if (!pHead) return;

	int sum = pHead->data;
	Node* temp = new Node;
	temp->data = sum;
	temp->pNext = nullptr;
	newList = temp;

	Node* cur = pHead->pNext;
	Node* prev = newList;
	while (cur) {
		sum += cur->data;
		Node* temp = new Node;
		temp->data = sum;
		temp->pNext = nullptr;
		prev->pNext = temp;

		prev = temp;
		cur = cur->pNext;
	}
}