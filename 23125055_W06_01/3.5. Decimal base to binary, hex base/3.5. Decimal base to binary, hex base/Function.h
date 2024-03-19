#pragma once
struct Node;
struct Stack;
#include <string>

void decimal_to_binary(int decNum, int& converted);
void binary_to_decimal(int binNum, int& converted);

void decimal_to_hex(int decNum, std::string& converted);
void hex_to_decimal(std::string& hexNum, int& converted);

