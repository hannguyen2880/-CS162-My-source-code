#pragma once
#include "Node.h"

struct Stack {
	Node* pHead = nullptr;
	int size = 0;
	void push(int x);
	bool pop(int& x);
	void displayStack(void);
	bool isEmpty(void);
};

void Stack::push(int x) {
	insertAtBeginning(pHead, x);
	++size;
}

bool Stack::pop(int& x) {
	bool check = removeAtBeginning(pHead, x);
	if (check) {
		--size;
		return true;
	}
	return false;
}

bool Stack::isEmpty(void) {
	return (size == 0);
}

void Stack::displayStack(void) {
	std::cout << "Your list has " << size << " numbers: ";
	displayList(pHead);
}
