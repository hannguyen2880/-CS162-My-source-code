#include "Node.h"
#include <iostream>

void insertAtBeginning(Node*& pHead, int x) {
	Node* tmp = new Node;
	tmp->data = x;
	tmp->next = nullptr;

	if (pHead == nullptr) {
		pHead = tmp;
		return;
	}
	tmp->next = pHead;
	pHead = tmp;
}

bool removeAtBeginning(Node*& pHead, int& x) {
	if (pHead == nullptr) return false;
	if (pHead->next == nullptr) {
		x = pHead->data;
		pHead = nullptr;
		return true;
	}
	x = pHead->data;
	Node* tmp = pHead;
	pHead = pHead->next;
	delete tmp;
	return true;
}

void displayList(Node*& pHead) {
	std::cout << "Our list: ";
	Node* cur = pHead;
	for (; cur != nullptr; cur = cur->next) {
		std::cout << cur->data << " ";
	}
	std::cout << "\n";
}

void deleteList(Node*& head) {
	while (head != nullptr) {
		Node* temp = head->next;
		delete head;
		head = temp;
	}
}