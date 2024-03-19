#include <string>
#include "Stack.h"

void decimal_to_binary(int decNum, int& converted) {
	Stack s;
	while (decNum > 0) {
		s.push(decNum % 2);
		decNum /= 2;
	}

	converted = 0;
	while (!s.isEmpty()) {
		int item = s.top();
		converted = converted * 10 + item;
		s.pop(item);
	}
}

void binary_to_decimal(int binNum, int& converted) {
	converted = 0;
	int base = 1;
	while (binNum > 0) {
		int item = binNum % 10;
		converted += item * base;
		base *= 2;
		binNum /= 10;
	}
}
// decode('A') = 10
int decode(char ch) {
	if (ch == 'A') return 10;
	if (ch == 'B') return 11;
	if (ch == 'C') return 12;
	if (ch == 'D') return 13;
	if (ch == 'E') return 14;
	if (ch == 'F') return 15;
}

// encode(10) = 'A'
char encode(int num) {
	if (num == 10) return 'A';
	if (num == 11) return 'B';
	if (num == 12) return 'C';
	if (num == 13) return 'D';
	if (num == 14) return 'E';
	if (num == 15) return 'F';
}

void decimal_to_hex(int decNum, std::string& converted) {
	Stack s;
	while (decNum > 0) {
		s.push(decNum % 16);
		decNum /= 16;
	}
	converted = "";
	while (!s.isEmpty()) {
		int item = s.top();
		if (item < 10) converted.push_back(item + '0');
		else converted.push_back(encode(item));
		s.pop(item);
	}
}

void hex_to_decimal(std::string& hexNum, int& converted) {
	int base = 1;
	converted = 0;
	
	for (int i = hexNum.size() - 1; i >= 0; --i) {
		char ch = hexNum[i];
		int item;
		if (ch >= '0' && ch <= '9') item = ch - '0';
		else item = decode(ch);

		converted += item * base;
		base *= 16;
	}
}