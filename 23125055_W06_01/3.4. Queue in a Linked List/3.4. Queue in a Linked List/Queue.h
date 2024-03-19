#pragma once
#include "Node.h"

struct Queue {
	Node* head;
	Node* tail;
	int capacity;

	void init(int size);
	void enqueue(int value);
	bool dequeue(int& value);
	bool isEmpty();
	void empty();
	int size();
	int front();
	void display();
};
