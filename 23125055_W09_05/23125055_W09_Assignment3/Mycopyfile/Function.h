#pragma once
#include <string>
#include <fstream>
#include <iostream>

std::string getFileName(std::string& path);
int getFileSize(std::ifstream& fin);
void saveBinFile(std::string& path, int& sizeFile, char*& content);
void readBinFile(std::string& path, int& sizeFile, char*& content);
/*
Test case:
Input: Mycopyfile -s D:/CS162/[CS162]My-source-code/23125055_W09_05/23125055_W09_Assignment3/Mycopyfile/input.bin -d D:/CS162/[CS162]My-source-code/23125055_W09_05/23125055_W09_Assignment3
*/
