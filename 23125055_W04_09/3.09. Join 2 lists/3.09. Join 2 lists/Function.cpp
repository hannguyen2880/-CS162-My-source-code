#include "Function.h"

void InputLinkedList(Node*& pHead) {
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

void Join(Node*& ans, Node*& pH1, Node*& pH2) {
	if (!pH1 && !pH2) return;

	if (!pH1) {
		Node* cur2 = pH2;
		Node* cur = pH2;
		ans = new Node;
		ans->data = cur->data;
		ans->pNext = cur->pNext;

		if (cur2->pNext) {
			cur2 = cur2->pNext;
			while (cur2) {
				Node* temp = new Node;
				temp->data = cur2->data;
				temp->pNext = nullptr;
				cur->pNext = temp;
				cur = cur->pNext;
				cur2 = cur2->pNext;
			}
		}
		return;
	}
	Node* cur = pH1, * cur1 = pH1;
	ans = cur;

	if (cur1->pNext) {
		cur1 = cur1->pNext;
		while (cur1) {
			Node* temp = new Node;
			temp->data = cur1->data;
			temp->pNext = nullptr;
			cur->pNext = temp;
			cur = cur->pNext;
			cur1 = cur1->pNext;
		}
	}
	
	Node* cur2 = pH2;

	while (cur2) {
		Node* temp = new Node;
		temp->data = cur2->data;
		temp->pNext = nullptr;
		cur->pNext = temp;
		cur = cur->pNext;
		cur2 = cur2->pNext;
	}
}