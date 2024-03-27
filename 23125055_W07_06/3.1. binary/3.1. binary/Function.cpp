#include "Function.h"
#include <string>

std::string decimal2Binary(int x)
{
	if (x == 0) return "";
	std::string cur = decimal2Binary(x / 2);
	cur.push_back(x % 2 + '0');
	return cur;
}

int binary2Decimal(std::string& s)
{
	if (s.empty()) return 0;
	int item = s.back() - '0';
	s.pop_back();
	return item + 2 * binary2Decimal(s);
}
