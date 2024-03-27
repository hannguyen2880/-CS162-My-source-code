#include <iostream>
using namespace std;
#include "Node.h"

int main() {
	Node* head = nullptr;
	cout << "Input a linked list: ";
	inputList(head);

	cout << "1. If you want to search an element in your list.\n";
	cout << "2. If you want to reverse your list.\n";
	cout << "3. If you want to find the middle of your list.\n";
	cout << "4. If you want to delete a value of X in your list.\n";
	cout << "5. If you want to remove duplicate elements, keep one, in your list.\n";
	cout << "Or you can press 0 to exist the program.\n";
	cout << "Your choice is: ";
	int choice; cin >> choice;

	while (true) {
		while (choice < 0 || choice > 5) {
			cout << "Invalid input. Please choose a number in the interval [0; 5].\n";
			cin >> choice;
		}
		if (choice == 0) return 0;
		switch (choice)
		{
		case 1: {
			cout << "Input an element that you want to find: ";
			int x; cin >> x;
			int pos = -1;
			searchAnElement(head, x, 0, pos);
			if (pos == -1) cout << "Cannot find this element in your list.\n";
			else cout << "I found it. It's the value at Node: " << pos << "\n";
			break;
		}
		case 2: {
			Node* p = head;
			reverseList(head, p);
			cout << "Our list after reversing is:\n";
			displayList(head);
			break;
		}
		case 3: {
			Node* mid = findMiddle(head, nullptr, nullptr);
			cout << "The middle of the list is: " << mid->data << "\n";
			break;
		}
		case 4: {
			cout << "Input a value that you want to delete: ";
			int x; cin >> x;
			deleteX(head, x);
			cout << "Our list after deleting is:\n";
			displayList(head);
			break;
		}
		case 5: {
			removeDuplicate(head);
			cout << "Our list after processing is:\n";
			displayList(head);
			break;
		}
		default:
			break;
		}

		cout << "-----------------------------------------\n";
		cout << "What's your next choice: ";
		cin >> choice;
	}
	
	deleteList(head);
	return 0;
}