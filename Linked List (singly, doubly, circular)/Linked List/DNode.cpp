#include <iostream>
using namespace std;
#include "DNode.h"

void inputDList(DNode*& pDHead) {
    int x;
    cin >> x;

    DNode* cur = new DNode;
    while (x != 0) {
        if (pDHead == nullptr) {
            pDHead = new DNode;
            cur = pDHead;
            cur->pPrev = nullptr;
        }
        else {
            cur->pNext = new DNode;
            cur->pNext->pPrev = cur;
            cur = cur->pNext;
        }
        cur->data = x;
        cur->pNext = nullptr;
        cin >> x;
    }
}

void insertAtBeginning(DNode*& pDHead, int x) {
	DNode* tmp = new DNode;
	tmp->data = x;
	tmp->pNext = pDHead;
	tmp->pPrev = nullptr;
	if (pDHead) pDHead->pPrev = tmp;
	pDHead = tmp;
}

void insertAfterK(DNode*& pDHead, int x, int k) {
    DNode* cur = pDHead;
    while (cur != nullptr) {
        if (cur->data == k) {
            DNode* tmp = new DNode;
            tmp->data = x;
            tmp->pNext = cur->pNext;
            cur->pNext = tmp;
            tmp->pPrev = cur;
            cur->pNext->pPrev = tmp;
            return;
        }
        cur = cur->pNext;
    }
}

void insertXBeforeK(DNode*& pDHead, int x, int k) {
    DNode* cur = pDHead;
    if (cur->data == k) {
        insertAtBeginning(pDHead, x);
        return;
    }
    cur = cur->pNext;
    while (cur != nullptr) {
        if (cur->data == k) {
            DNode* tmp = new DNode;
            tmp->data = x;
            tmp->pPrev = cur->pPrev;
            tmp->pNext = cur;
            cur->pPrev->pNext = tmp;
            cur->pPrev = tmp;
            return;
        }
        cur = cur->pNext;
    }
}

void deleteDAllK(DNode*& pDHead, int x) {
    if (!pDHead) return;
    DNode* cur = pDHead;
    while (cur) {
        if (cur->data == x) {
            if (cur->pNext) cur->pNext->pPrev = cur->pPrev;
            if (cur->pPrev) cur->pPrev->pNext = cur->pNext;
            else pDHead = pDHead->pNext;

            DNode* tmp = cur;
            cur = cur->pNext;
            delete tmp;
        }
        else cur = cur->pNext;
    }
}

void displayDList(DNode*& pDHead) {
    cout << "Our list: ";
    DNode* cur = pDHead;
    while (cur != nullptr) {
        cout << cur->data << " ";
        cur = cur->pNext;
    }
}