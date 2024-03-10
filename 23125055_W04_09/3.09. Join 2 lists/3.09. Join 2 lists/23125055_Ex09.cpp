#include <iostream>
using namespace std;
#include "Function.h"

int main() {
	Node* ans = nullptr, * pH1 = nullptr, * pH2 = nullptr;
	InputLinkedList(pH1);
	InputLinkedList(pH2);
	Join(ans, pH1, pH2);
	displayLinkedList(ans);
	
	deleteList(ans);
	return 0;
}