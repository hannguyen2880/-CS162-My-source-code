#include <string>
#include <fstream>
#include <iostream>
#include "Function.h"

std::string getFileName(std::string& path) {
    for (int i = path.size(); i >= 0; --i) {
        if (path[i] == '/') return path.substr(i + 1);
    }
}

int getFileSize(std::ifstream& fin) {
    fin.seekg(0, fin.end);
    int size = fin.tellg();
    fin.seekg(0);
    return size;
}

void saveBinFile(std::string& path, int& sizeFile, char*& content) {
    std::ofstream fout;
    fout.open(path, std::ios::binary);
    if (!fout.is_open()) {
        std::cout << "Cannot open file " << path << "\n";
        return;
    }
    fout.write(content, sizeFile);
    fout.close();
}

void readBinFile(std::string& path, int& sizeFile, char*& content) {
    std::ifstream fin;
    fin.open(path, std::ios::binary);
    if (!fin.is_open()) {
        std::cout << "Cannot open file " << path << "\n";
        return;
    }
    sizeFile = getFileSize(fin);
    content = new char[sizeFile];
    fin.read(content, sizeFile);
    fin.close();
}