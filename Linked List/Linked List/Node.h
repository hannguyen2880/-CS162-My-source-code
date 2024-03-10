#pragma once
struct Node {
	int data;
	Node* pNext;
};

void inputList(Node*& pHead);
void deleteList(Node*& pHead);
void displayList(Node*& pHead);
// Insert X after the node having the data value K; if K exists, insert the first time.
void insertXAfterK(Node* pHead, int x, int k); 
void InsertXBeforeK(Node*& pHead, int x, int k);
void delete1stK(Node*& pHead, int k);
void deleteAllK(Node*& pHead, int k);
Node* findX(Node* pHead, int x);
void mergeOderedList(Node*& pOH1, Node*& pOH2, Node*& pOH3);
void removeDuplicate(Node*& pHead);
