#pragma once
struct Node {
	int data;
	Node* pNext;
};

void inputList(Node*& pHead);
void deleteList(Node*& pHead);
void displayList(Node*& pHead);
//
void searchAnElement(Node*& pHead, int x, int curpos, int& pos); 
// searchAnElement(head, 10, 0, pos);
void reverseList(Node*& pHead, Node*& p);
Node* findMiddle(Node*& pHead, Node* slow, Node* fast);
void deleteX(Node*& pHead, int& x);
//Node* deleteX(Node*& pHead, int& x);
void removeDuplicate(Node*& pHead);
