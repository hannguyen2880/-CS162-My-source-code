#include "Node.h"
#include <iostream>

void insertAtBeginning(Node*& pHead, Node*& tail, int x) {
	Node* tmp = new Node;
	tmp->data = x;
	tmp->next = nullptr;

	if (pHead == nullptr) {
		pHead = tmp;
		tail = tmp;
		return;
	}
	tmp->next = pHead;
	pHead = tmp;
}

void insertAtEnd(Node*& head, Node*& tail, int x) {
	if (head == tail && head == nullptr) {
		insertAtBeginning(head, tail, x);
		return;
	}
	Node* temp = new Node;
	temp->data = x;
	temp->next = nullptr;
	tail->next = temp;
	tail = tail->next;

	//delete temp;
}

bool removeAtBeginning(Node*& pHead, Node*& tail, int& x) {
	if (pHead == nullptr) return false;
	if (pHead->next == nullptr) {
		x = pHead->data;
		pHead = nullptr;
		tail = nullptr;
		return true;
	}
	x = pHead->data;
	Node* tmp = pHead;
	pHead = pHead->next;
	delete tmp;
	return true;
}

void displayList(Node*& pHead) {
	Node* cur = pHead;
	for (; cur != nullptr; cur = cur->next) {
		std::cout << cur->data << " ";
	}
	std::cout << "\n";
}

void deleteList(Node*& head, Node*& tail) {
	while (head) {
		Node* temp = head->next;
		delete head;
		head = temp;
	}
}