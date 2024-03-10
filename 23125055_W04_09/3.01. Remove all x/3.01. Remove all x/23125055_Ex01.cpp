#include <iostream>
#include <fstream>
using namespace std;
#include "Node.h"

int main() {
	ifstream fin;
	fin.open("input.txt");
	if (fin) {
		Node* pHead = nullptr;

		InputFileLinkedList(pHead, fin);
		int x;
		fin >> x;
		deleteAllX(pHead, x);
		
		ofstream fout;
		fout.open("output.txt");
		if (fout) displayFileLinkedList(pHead, fout);
		else cout << "Error output file.\n";

		deleteList(pHead);
		fout.close();
	}
	else cout << "Error input file.\n";
	fin.close();
	
	return 0;
}