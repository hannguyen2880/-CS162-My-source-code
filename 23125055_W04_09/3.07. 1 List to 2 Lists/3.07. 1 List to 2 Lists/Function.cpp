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

void addElement(Node*& p, int x) {
	Node* temp = new Node;
	temp->data = x;
	temp->pNext = nullptr;
	p = temp;
}

void Divide2List(Node*& pHead, Node*& pH1, Node*& pH2) {
	if (!pHead) return;
	Node* cur = pHead;
	addElement(pH1, cur->data);

	cur = cur->pNext;
	if (!cur) return;
	addElement(pH2, cur->data);

	int id = 0;
	cur = cur->pNext;
	Node* cur1 = pH1, * cur2 = pH2;
	while (cur) {
		if (id % 2 == 0) {
			// add to pH1
			Node* temp = new Node;
			temp->data = cur->data;
			temp->pNext = nullptr;
			cur1->pNext = temp;
			cur1 = cur1->pNext;
		}
		else {
			// add to pH2
			Node* temp = new Node;
			temp->data = cur->data;
			temp->pNext = nullptr;
			cur2->pNext = temp;
			cur2 = cur2->pNext;
		}
		cur = cur->pNext;
		++id;
	}
}