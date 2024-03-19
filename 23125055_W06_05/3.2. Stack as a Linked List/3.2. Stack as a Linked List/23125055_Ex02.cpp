#include <iostream>
using namespace std;

#include "Node.h"
#include "Stack.h"

int main() {
	Stack s;
	int size = 0;
	s.init(size);
	cout << "Press:\n";
	cout << "1. Push an integer x into the stack:\n";
	cout << "2. Pop an integer on the top of the stack:\n";
	cout << "3. Make you stack empty.\n";
	cout << "4. Print out the current size of your stack\n";
	cout << "5. Print out the value on the top of the stack.\n";
	cout << "6. Print out the current value in your stack:\n";
	cout << "7. Check if your stack is empty or not\n";
	cout << "Or you can press 0 to stop the program.\n";
	cout << "Now, choose a number, please: ";
	int choice;
	cin >> choice;

	while (choice != 0) {
		while (choice < 0 or choice > 7) {
			cout << "Invalid data. Input again, please: ";
			cin >> choice;
		}
		if (choice == 0) return 0;

		switch (choice)
		{
		case 1: {
			cout << "Input the integer you want to push in: ";
			int x; cin >> x;
			s.push(x);
			break;
		}
		case 2: {
			int x;
			bool isPop = s.pop(x);
			if (isPop) cout << "Your integer that you just pop out is: " << x << "\n";
			else cout << "Your stack is empty now, so that I cannot pop out anything!\n";
			break;
		}
		case 3: {
			s.empty();
			break;
		}
		case 4: {
			cout << "Current size is: " << s.size() << "\n";
			break;
		}
		case 5: {
			cout << "That's : " << s.top() << "\n";
			break;
		}
		case 6: {
			s.displayStack();
			break;
		}
		case 7: {
			bool isEmpty = s.isEmpty();
			if (isEmpty) cout << "Your stack is empty now.\n";
			else cout << "No. It's not empty.\n";
		}
		default:
			break;
		}
		cout << "Your next choice: ";
		cin >> choice;
	}
	cout << "Hope that you had a great experience!\n";
	s.empty();
	return 0;
}