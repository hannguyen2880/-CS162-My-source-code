#pragma once
#include "Function.h"

struct Stack {
	Node* head = nullptr;
	int capacity = 0;

	void init(int capacity);
	void push(int x);
	bool pop(int& x);
	bool isEmpty();
	void empty();
	int size();
	int top();
	void displayStack(void);
};