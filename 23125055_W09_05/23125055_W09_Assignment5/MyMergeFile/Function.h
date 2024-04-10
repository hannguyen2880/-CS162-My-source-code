#pragma once
#include <string>
#include <fstream>
#include <iostream>

int toInt(std::string& s);
std::string toFormatString(int num);
void formatFileName(std::string& fileName);
void getFileName_and_DirFile(std::string& path, std::string& fileName, std::string& fileDir);
int getFileSize(std::ifstream& fin);
void saveBinFile(std::string& path, int& sizeFile, char*& content);
bool readBinFile(std::string& path, int& sizeFile, char*& content);
/*
Test case:
Input: MyMergeFile -s D:/CS162/[CS162]My-source-code/23125055_W09_05/23125055_W09_Assignment5/MyMergeFile/input.bin.part01 -d D:\CS162\[CS162]My-source-code\23125055_W09_05\23125055_W09_Assignment5/MyMergeFile
*/
