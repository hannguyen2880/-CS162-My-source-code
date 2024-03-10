#include <iostream>
using namespace std;
#include "myFunction.h"

int main() {
	ifstream fin;
	fin.open("input.txt");
	if (fin) {
		Node* pHead = nullptr;
		InputFileLinkedList(pHead, fin);
		reverseList(pHead);

		ofstream fout;
		fout.open("output.txt");
		if (fout) displayFileLinkedList(pHead, fout);
		else cout << "Error output file.\n";
		fout.close();
		deleteList(pHead);
	}
	else cout << "Error input file.\n";
	fin.close();
	return 0;
}