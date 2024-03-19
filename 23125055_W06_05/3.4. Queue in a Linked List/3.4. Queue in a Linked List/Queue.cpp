#include "Queue.h"
#include <iostream>

void Queue::init(int size) {
	head = nullptr;
	tail = nullptr;
	capacity = 0;
}

void Queue::enqueue(int value) {
	insertAtEnd(head, tail, value);
	++capacity;
}

bool Queue::dequeue(int& value) {
	bool isPop = removeAtBeginning(head, tail, value);
	if (isPop) --capacity;
	return isPop;
}

bool Queue::isEmpty() {
	return capacity == 0;
}

void Queue::empty() {
	deleteList(head, tail);
	capacity = 0;
}

int Queue::size() {
	return capacity;
}

int Queue::front() {
	return head->data;
}

void Queue::display() {
	std::cout << "Your queue now has " << capacity << " elements:\n";
	displayList(head);
}






