#include <string>
#include <fstream>
#include <iostream>
#include "Function.h"

int toInt(std::string& s) {
    int num = 0;
    for (int i = 0; i < s.size(); ++i) {
        num = num * 10 + (s[i] - '0');
    }
    return num;
}

std::string toFormatString(int num) {
    std::string ret = "";
    if (num == 0) return "0";
    while (num > 0) {
        ret.push_back(num % 10 + '0');
        num /= 10;
    }
    if (ret.size() < 2) {
        ret = "0" + ret;
        return ret;
    }
    for (int i = 0; i < (int)ret.size() / 2; ++i) {
        // swap: s[i] && s[s.size() - i - 1]
        char tmp = ret[i];
        ret[i] = ret[ret.size() - i - 1];
        ret[ret.size() - i - 1] = ret[i];
    }
    return ret;
}

void formatFileName(std::string& fileName) {
    while (!fileName.empty() && fileName.back() != '.') fileName.pop_back();
    if (!fileName.empty()) fileName.pop_back();
}

void getFileName_and_DirFile(std::string& path, std::string& fileName, std::string& fileDir) {
    for (int i = path.size(); i >= 0; --i) {
        if (path[i] == '/') {
            fileName = path.substr(i + 1);
            fileDir = path.substr(0, i + 1);
            return;
        }
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

bool readBinFile(std::string& path, int& sizeFile, char*& content) {
    std::ifstream fin;
    fin.open(path, std::ios::binary);
    if (!fin.is_open()) {
        std::cout << "Cannot open file " << path << "\n";
        return false;
    }
    sizeFile = getFileSize(fin);
    content = new char[sizeFile];
    fin.read(content, sizeFile);
    fin.close();
    return true;
}