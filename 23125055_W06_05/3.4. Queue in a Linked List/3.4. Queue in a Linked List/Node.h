#pragma once
struct Node {
	int data;
	Node* next;
};

void insertAtBeginning(Node*& head, Node*& tail, int x);
void insertAtEnd(Node*& head, Node*& tail, int x);
bool removeAtBeginning(Node*& head, Node*& tail, int& x);
void displayList(Node*& head);
void deleteList(Node*& head, Node*& tail);
