#include <iostream>
#include <string.h>
using namespace std;
#include "myFunction.h"

int main() {
	char s[100];
	cin.get(s, 100, '\n');
	if (isPalindrome(s)) {
		cout << "This string is a palindrome.\n";
	}
	else cout << "This string is not a palindrome.\n";
	return 0;
}