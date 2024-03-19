#include "Stack.h"
#include "Node.h"
#include <iostream>

void Stack::init(int size) {
	head = nullptr;
	size = 0;
}

void Stack::push(int x) {
	insertAtBeginning(head, x);
	++capacity;
}

bool Stack::pop(int& x) {
	bool check = removeAtBeginning(head, x);
	if (check) {
		--capacity;
		return true;
	}
	return false;
}

bool Stack::isEmpty() {
	return (capacity == 0);
}

void Stack::empty() {
	deleteList(head);
	capacity = 0;
}

int Stack::size() {
	return capacity;
}
int Stack::top() {
	return head->data;
}

void Stack::displayStack(void) {
	std::cout << "Your list has " << capacity << " numbers: ";
	displayList(head);
}
