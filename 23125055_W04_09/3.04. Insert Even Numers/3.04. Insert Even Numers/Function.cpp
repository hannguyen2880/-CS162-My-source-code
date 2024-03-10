#include "Function.h"

void InputFileLinkedList(Node*& pHead, ifstream& file) {
	cout << "Input your list in the text file.\n";
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
	cout << "Go to the output file to see the result.\n";
	Node* cur = pHead;
	for (; cur != nullptr; cur = cur->pNext) {
		file << cur->data << " ";
	}
	file << 0 << endl;
}

void deleteList(Node*& pHead) {
	while (pHead != nullptr) {
		Node* temp = pHead->pNext;
		delete pHead;
		pHead = temp;
	}
}

void insertEvenNums(Node*& pHead) {
	if (!pHead) return;
	int curnum = 2;
	Node* cur = new Node;
	cur->data = curnum;
	cur->pNext = pHead;
	pHead = cur;

	int cnt = 1;
	cur = cur->pNext;
	while (cur->pNext) {
		if (cnt & 1) {
			curnum += 2;
			Node* temp = new Node;
			temp->data = curnum;
			temp->pNext = cur->pNext;
			cur->pNext = temp;
		}
		++cnt;
		cur = cur->pNext;
	}
}