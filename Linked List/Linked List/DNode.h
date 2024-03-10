#pragma once
// Doubly Linked List
struct DNode {
	int data;
	DNode* pNext, * pPrev;
};

void inputDList(DNode*& pDHead);
void insertAtBeginning(DNode*& pDHead, int x);
void insertAfterK(DNode*& pDHead, int x, int k);
void insertXBeforeK(DNode*& pDHead, int x, int k);
void deleteDAllK(DNode*& pDHead, int k);
void displayDList(DNode*& pDHead);

/*
BENEFITS OF USING DOUBLY LINK LIST:
- Many cases in life that single link isn't useful.
For ex: both ends,...
*/
