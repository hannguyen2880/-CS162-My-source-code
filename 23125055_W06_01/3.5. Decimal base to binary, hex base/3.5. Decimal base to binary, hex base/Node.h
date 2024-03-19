#pragma once
struct Node {
	int data;
	Node* next;
};

void insertAtBeginning(Node*& head, int x);
bool removeAtBeginning(Node*& head, int& x);
void displayList(Node*& head);
void deleteList(Node*& head);
