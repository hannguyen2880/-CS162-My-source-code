#include <iostream>
using namespace std;
#include "Queue.h"

int main() {
	Queue que;
	int size = 0;
	que.init(size);
	cout << "Press:\n";
	cout << "1. Push an integer x into the queue:\n";
	cout << "2. Remove the oldest element in the queue:\n";
	cout << "3. Make you queue empty.\n";
	cout << "4. Print out the current size of your queue\n";
	cout << "5. Print out the the oldest element of the queue.\n";
	cout << "6. Print out the all of current values in your queue:\n";
	cout << "7. Check if your queue is empty or not\n";
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
			que.enqueue(x);
			break;
		}
		case 2: {
			int x;
			bool isPop = que.dequeue(x);
			if (isPop) cout << "Your integer that you just pop out is: " << x << "\n";
			else cout << "Your queue is empty now, so that I cannot pop out anything!\n";
			break;
		}
		case 3: {
			que.empty();
			break;
		}
		case 4: {
			cout << "Current size is: " << que.size() << "\n";
			break;
		}
		case 5: {
			cout << "That's : " << que.front() << "\n";
			break;
		}
		case 6: {
			que.display();
			break;
		}
		case 7: {
			bool isEmpty = que.isEmpty();
			if (isEmpty) cout << "Your queue is empty now.\n";
			else cout << "No. It's not empty.\n";
		}
		default:
			break;
		}
		cout << "Your next choice: ";
		cin >> choice;
	}
	cout << "Hope that you had a great experience!\n";
	que.empty();
	return 0;
}