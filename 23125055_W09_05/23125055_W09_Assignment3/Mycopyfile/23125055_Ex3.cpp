#include <iostream>
using namespace std;

#include "Function.h"

int main() {
    cout << "Enter your requirement: \n";
    string s[5];
    for (int i = 0; i < 5; ++i) cin >> s[i];

    string pathFile = s[2], DirectoryFile = s[4];

    if (pathFile.empty()) {
        cout << "No such source file found!";
        return 0;
    }
    if (DirectoryFile.empty()) {
        cout << "No such destination file found!";
        return 0;
    }
    if (DirectoryFile.back() != '/') DirectoryFile.push_back('/');
    string outputPath = DirectoryFile + getFileName(pathFile);
    //cout << outputPath;
    int size = 0;
    char* content = nullptr;
    readBinFile(pathFile, size, content);
    saveBinFile(outputPath, size, content);

    delete[] content;
    cout << "Save successfully.\n";
    // Mycopyfile -s D:/CS162/[CS162]My-source-code/23125055_W09_05/23125055_W09_Assignment3/Mycopyfile/input.bin -d D:/CS162/[CS162]My-source-code/23125055_W09_05/23125055_W09_Assignment3
	return 0;
}