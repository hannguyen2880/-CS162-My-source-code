#pragma once
#include <string>
#include <fstream>
#include <iostream>

int toInt(std::string& s);
std::string getFileName(std::string& path);
std::string toFormatString(int num);
int getFileSize(std::ifstream& fin);
void saveBinFile(std::string& path, int& sizeFile, char*& content, int pos, int maxSize);
void readBinFile(std::string& path, int& sizeFile, char*& content);

/*
Test case:
Input: Mysplitfile -s D:/CS162/[CS162]My-source-code/23125055_W09_05/23125055_W09_Assignment4/Mysplitfile/input.bin -d D:/CS162/[CS162]My-source-code/23125055_W09_05/23125055_W09_Assignment4/Mysplitfile -numpart 2
*/
