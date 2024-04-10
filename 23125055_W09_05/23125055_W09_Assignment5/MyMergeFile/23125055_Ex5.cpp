#include <iostream>
using namespace std;

#include "Function.h"

int main() {
	cout << "Enter your requirement: ";
	string s[5];
	for (int i = 0; i < 5; ++i) cin >> s[i];
	string pathFile = s[2], desFile = s[4];

    if (pathFile.empty()) {
        cout << "No such source file found!";
        return 0;
    }
    if (desFile.empty()) {
        cout << "No such destination file found!";
        return 0;
    }
    if (desFile.back() != '/') desFile.push_back('/');
    string sourceFile, fileName;
    getFileName_and_DirFile(pathFile, fileName, sourceFile);
    formatFileName(fileName);

    int size = 0;
    char* content = nullptr;
    
    string outputFile = desFile + fileName;
    ofstream fout(outputFile, ios::binary);

    for (int i = 1; ; ++i) {
        string partFile = sourceFile + fileName + ".part" + toFormatString(i);
        if (readBinFile(partFile, size, content)) {
            if (!fout.is_open()) break;
            fout.write(content, size);
            delete[] content;
            content = nullptr;
        }
        else break;
    }
    fout.close();
    cout << "Merge successfully\n";
	return 0;
}