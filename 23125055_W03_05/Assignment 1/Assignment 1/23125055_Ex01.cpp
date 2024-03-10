#include <iostream>
using namespace std;
#include "myFunction.h"

int main() {
	int x;
	cout << "Input an integer: ";
	cin >> x;
	addOne(&x);
	cout << x;
	return 0;
}