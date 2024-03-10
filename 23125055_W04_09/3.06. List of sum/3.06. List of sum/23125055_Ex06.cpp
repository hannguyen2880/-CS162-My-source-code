#include <iostream>
using namespace std;
#include "Function.h"

int main() {
	Node* pHead = nullptr, * newList = nullptr;
	InpuLinkedList(pHead);
	SumOfList(pHead, newList);
	displayLinkedList(newList);
	deleteList(pHead);
	deleteList(newList);
	return 0;
}