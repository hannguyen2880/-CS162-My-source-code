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

void Merge(Node*& pHead, Node*& pH1, Node*& pH2) {
	if (!pH1) {
		pHead = pH2;
		return;
	}
	if (!pH2) {
		pHead = pH1;
		return;
	}

	Node* cur1 = pH1, * cur2 = pH2;
	addElement(pHead, cur1->data);
	Node* cur = pHead;

	Node* tmp = new Node;
	tmp->data = cur2->data;
	tmp->pNext = nullptr;
	cur->pNext = tmp;

	cur = cur->pNext;
	cur1 = cur1->pNext;
	cur2 = cur2->pNext;
	
	int id = 0;

	while (cur1 && cur2) {
		if (id % 2 == 1) {
			//add from pH2
			Node* temp = new Node;
			temp->data = cur2->data;
			temp->pNext = nullptr;
			cur->pNext = temp;
			cur2 = cur2->pNext;
		}
		else {
			// add from pH1
			Node* temp = new Node;
			temp->data = cur1->data;
			temp->pNext = nullptr;
			cur->pNext = temp;
			cur1 = cur1->pNext;
		}
		cur = cur->pNext;
		++id;
	}
	if (!cur1 && !cur2) return;
	if (cur1) {
		while (cur1) {
			Node* temp = new Node;
			temp->data = cur1->data;
			temp->pNext = nullptr;
			cur->pNext = temp;
			cur1 = cur1->pNext;
		}
	}
	else {
		while (cur2) {
			Node* temp = new Node;
			temp->data = cur2->data;
			temp->pNext = nullptr;
			cur->pNext = temp;
			cur2 = cur2->pNext;
		}
	}
}