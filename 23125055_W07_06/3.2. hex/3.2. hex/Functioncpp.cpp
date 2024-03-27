#include "Function.h"
#include <string>

// encode(10) = 'A'
char encode(int num) {
	if (num == 10) return 'A';
	if (num == 11) return 'B';
	if (num == 12) return 'C';
	if (num == 13) return 'D';
	if (num == 14) return 'E';
	if (num == 15) return 'F';
}

std::string toString(int x) {
	std::string ret = "";
	ret.push_back(x + '0');
	return ret;
}

std::string decimal2Hex(int x) {
	if (x < 16) {
		if (x < 10) return toString(x);

		std::string cur = "";
		char ch = encode(x);
		cur.push_back(ch);
		return cur;
	}

	return decimal2Hex(x / 16) + decimal2Hex(x % 16);
}

int hex2Decimal(std::string& s) {
	if (s.empty()) return 0;
	char ch = s.back();
	int x = 0;
	if (ch >= 'A' && ch <= 'F') x = ch - 'A' + 10;
	else x = ch - '0';

	s.pop_back();
	return x + 16 * hex2Decimal(s);
}