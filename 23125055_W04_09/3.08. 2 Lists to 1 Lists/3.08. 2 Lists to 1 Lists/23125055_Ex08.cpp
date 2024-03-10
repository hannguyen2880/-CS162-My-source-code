#include <iostream>
using namespace std;
#include "Function.h"

int main() {
	Node* pHead = nullptr, * pH1 = nullptr, * pH2 = nullptr;
	InpuLinkedList(pH1);
	InpuLinkedList(pH2);
	Merge(pHead, pH1, pH2);

	displayLinkedList(pHead);

	deleteList(pH1);
	deleteList(pH2);
	deleteList(pHead);
	return 0;
}