#include "Function.h"

int generateNthElements(int* list, bool* used, int i) {
	if (i == 0) {
		list[i] = 0;
		used[0] = true;
		return i;
	}

	int ret = generateNthElements(list, used, i - 1);
	if (ret - i > 0 && !used[ret - i]) {
		list[i] = ret - i;
		used[ret - i] = true;
		return ret - i;
	}
	list[i] = ret + i;
	used[ret + i] = true;
	return ret + i;
}