#include "Node.h"

void InputFileLinkedList(Node*& pHead, ifstream& file) {
	int x;
	file >> x;

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
		file >> x;
	}
}

void displayFileLinkedList(Node*& pHead, ofstream& file) {
	Node* cur = pHead;
	for (; cur != nullptr; cur = cur->pNext) {
		file << cur->data << " ";
	}
	file << 0 << endl;
}

void deleteAllX(Node*& pHead, int x) {
	if (pHead == nullptr) return;

	if (pHead->data == x) {
		pHead = pHead->pNext;
	}

	Node* cur = pHead;
	while (cur->pNext != nullptr) {
		if (cur->pNext->data == x) {
			cur->pNext = cur->pNext->pNext;
		}
		else cur = cur->pNext;
	}
}

void deleteList(Node*& pHead) {
	while (pHead != nullptr) {
		Node* temp = pHead->pNext;
		delete pHead;
		pHead = temp;
	}
}