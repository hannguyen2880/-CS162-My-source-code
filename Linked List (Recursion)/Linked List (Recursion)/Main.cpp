#include <iostream>
using namespace std;

#include "Node.h"

int main() {
	Node* pHead = nullptr;
	inputList(pHead);
	displayListinReverseOrder(pHead);
	return 0;
}