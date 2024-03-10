#include "Node.h"
#include <iostream>

void insertAtBeginning(Node*& pHead, int x) {
	Node* tmp = new Node;
	tmp->data = x;
	tmp->pNext = nullptr;

	if (pHead == nullptr) {
		pHead = tmp;
		return;
	}
	tmp->pNext = pHead;
	pHead = tmp;
}

/*void insertAtEnd(Node*& pHead, int x) {

}*/

bool removeAtBeginning(Node*& pHead, int& x) {
	if (pHead == nullptr) return false;
	if (pHead->pNext == nullptr) {
		x = pHead->data;
		pHead = nullptr;
		return true;
	}
	x = pHead->data;
	Node* tmp = pHead;
	pHead = pHead->pNext;
	delete tmp;
	return true;
}

void displayList(Node*& pHead) {
	std::cout << "Our list: ";
	Node* cur = pHead;
	for (; cur != nullptr; cur = cur->pNext) {
		std::cout << cur->data << " ";
	}
}