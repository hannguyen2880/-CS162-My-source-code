#pragma once

struct DynamicArray {
	int* data = nullptr;
	int size, capacity;

	DynamicArray() {
		capacity = 1;
		size = 0;
		data = new int[capacity];
	}
	void increaseCapacity();
	void decreaseCapacity();
	int getsize();
	bool isEmpty();
	void push_back(int value);
	bool pop_back(int& value);
	//----------------------
};