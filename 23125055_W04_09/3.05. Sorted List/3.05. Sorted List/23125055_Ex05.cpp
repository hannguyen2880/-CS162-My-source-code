#include <iostream>
using namespace std;
#include "Function.h"

int main() {
	int x; cin >> x;
	Node* pHead = nullptr;
	InpuLinkedList(pHead);
	SortedList(pHead, x);
	displayLinkedList(pHead);
	deleteList(pHead);
	return 0;
}