#include <iostream>
using namespace std;
#include "Node.h"
#include "DNode.h"

int main() {
	Node* pHead = nullptr;
	inputList(pHead);
	removeDuplicate(pHead);
	displayList(pHead);
	return 0;
}