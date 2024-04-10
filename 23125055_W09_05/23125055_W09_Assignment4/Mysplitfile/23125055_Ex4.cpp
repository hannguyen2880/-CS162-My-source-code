#include <iostream>
using namespace std;

#include "Function.h"

int main() {
	cout << "Enter your requirement: ";
	string s[7];
	for (int i = 0; i < 7; ++i) cin >> s[i];
	string pathFile = s[2], directoryFile = s[4];
	int numPart = -1, sizePart = -1;

	if (s[5] == "-numpart") numPart = toInt(s[6]);
	else if (s[6] == "-sizeapart") sizePart = toInt(s[6]);

	if (pathFile.empty()) {
		cout << "No such source file found!";
		return 0;
	}
	if (directoryFile.empty()) {
		cout << "No such destination file found!";
		return 0;
	}
	if (numPart == -1 && sizePart == -1) {
		cout << "No such numpart and sizepart found!";
		return 0;
	}

	ifstream fin;
	fin.open(pathFile, ios::binary);
	if (!fin.is_open()) {
		cout << "Cannot open " << pathFile << "\n";
		return 0;
	}
	if (numPart == -1) {
		int size = getFileSize(fin);
		numPart = (size % sizePart == 0 ? size / sizePart : size / sizePart + 1);
	}
	else {
		int size = getFileSize(fin);
		sizePart = (size % numPart == 0 ? size / numPart : size / numPart + 1);
	}
	fin.close();

	if (directoryFile.back() != '/') directoryFile.push_back('/');
	
	int size = 0;
	char* content = nullptr;
	readBinFile(pathFile, size, content);
	// saveBinFile
	for (int i = 0; i < numPart; ++i) {
		string outputFile = directoryFile + getFileName(pathFile) + ".part" + toFormatString(i + 1);
		saveBinFile(outputFile, size, content, sizePart * (i - 1), sizePart);
	}
	delete[] content;
	cout << "Split successfully.\n";
	return 0;
}