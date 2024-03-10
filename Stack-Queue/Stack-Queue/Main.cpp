#include <iostream>
using namespace std;
#include "Stack.h"

int main() {
	Stack st;
	cout << "Press 1 if you want to push back; 2 if want to pop; and 3 if you want to display your stack; 0 if want to exit!\n";
	int choice, x;
	cin >> choice;
	while (choice) {

		switch (choice) {
		case 1:
			cout << "The integer: ";
			cin >> x;
			st.push(x);
			break;
		case 2:
		{
			int value;
			bool isPop = st.pop(value);
			if (isPop) cout << "We removed the value: " << value;
			else cout << "Nothing to remove.\n";
			break;
		}
		case 3: {
			st.displayStack();
			break;
		}
		default:
			return 0;
		}
		cin >> choice;
	}
	return 0;
}