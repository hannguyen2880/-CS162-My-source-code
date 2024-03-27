#include "DynamicArray.h"

void DynamicArray::increaseCapacity() {
    capacity *= 2;
    int* temp = new int[capacity];

    for (int i = 0; i < size; ++i) temp[i] = data[i];
    delete[] data;
    data = temp;
}

void DynamicArray::decreaseCapacity() {
    capacity = size;
    int* temp = new int[capacity];

    for (int i = 0; i < size; ++i) temp[i] = data[i];
    delete[] data;
    data = temp;
}

int DynamicArray::getsize() {
    return size;
}

bool DynamicArray::isEmpty() {
    return size == 0;
}

void DynamicArray::push_back(int value) {
    if (size == capacity) increaseCapacity();
    data[size] = value;
    ++size;
}

bool DynamicArray::pop_back(int& value) {
    if (size == 0) return false;
    value = data[size - 1];
    data[size - 1] = 0;
    --size;

    if (size == capacity / 2) decreaseCapacity();
    return true;
}
