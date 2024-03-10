#include <iostream>
using namespace std;
#include "Function.h"

int main() {
	Node* pHead = nullptr, * pH1 = nullptr, * pH2 = nullptr;
	InpuLinkedList(pHead);
	Divide2List(pHead, pH1, pH2);

	displayLinkedList(pH1);
	displayLinkedList(pH2);

	deleteList(pHead);
	deleteList(pH1);
	deleteList(pH2);
	
	return 0;
}