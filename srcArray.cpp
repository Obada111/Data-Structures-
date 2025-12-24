#include "Array.h"
#include <iostream>

template<class ElementType>
Array<ElementType>::Array() {
    std::cout << "constructor 1\n";
    size = 0;
}

template<class ElementType>
Array<ElementType>::Array(int s) {
    std::cout << "constructor 2\n";
    size = s;
    data = new ElementType[size];
}

template<class ElementType>
Array<ElementType>::~Array() {
    std::cout << "This is a Destructor\n";
    delete[] data;
}

template<class ElementType>
bool Array<ElementType>::setValue(int i, ElementType val) {
    if (i < 0 || i >= size) 
        return false;
    else {
        data[i] = val;
        return true;
    }
}

template<class ElementType>
void Array<ElementType>::read() {
    std::cout << "Enter the size of the array:";
    std::cin >> size;
    data = new ElementType[size];
    for (int i = 0; i < size; ++i) {
        std::cout << "\nEnter element#" << i << " ";
        std::cin >> data[i];
    }
}

template<class ElementType>
void Array<ElementType>::write() {
    for (int i = 0; i < size; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

template<class ElementType>
int Array<ElementType>::getSize() {
    return size;
}

template<class ElementType>
void Array<ElementType>::copyFrom(Array<ElementType> src) {
    if (size != src.size) {
        delete[] data;
        size = src.size;
        data = new ElementType[size];
    }
    for (int i = 0; i < size; i++) {
        data[i] = src.data[i];
    }
}

template<class ElementType>
bool Array<ElementType>::isEqual(Array<ElementType> src) {
    if (size != src.size) 
        return false;
    
    for (int i = 0; i < size; i++) {
        if (data[i] != src.data[i])
            return false;
    }
    return true;
}

template<class ElementType>
void Array<ElementType>::sort() {
    // Implementation of sorting algorithm would go here
    std::cout << "Sorting array" << std::endl;
}