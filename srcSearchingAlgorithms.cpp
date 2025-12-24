#include "SearchingAlgorithms.h"
#include <iostream>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int key) {
    int first = 0;
    int last = size - 1;
    
    while (first <= last) {
        int mid = (first + last) / 2;
        
        if (key == arr[mid]) {
            return mid; // found
        } else if (key < arr[mid]) {
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }
    
    return -1; // not found
}

int recursiveBinarySearch(int arr[], int first, int last, int key) {
    if (first > last) {
        return -1;
    }
    
    int mid = (first + last) / 2;
    
    if (key == arr[mid]) {
        return mid;
    } else if (key < arr[mid]) {
        return recursiveBinarySearch(arr, first, mid - 1, key);
    } else {
        return recursiveBinarySearch(arr, mid + 1, last, key);
    }
}

int main() {
    int arr[] = {2, 5, 9, 11, 21, 25, 29, 33, 45, 60, 87, 98};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int key = 11;
    int result = linearSearch(arr, size, key);
    
    std::cout << "Linear Search: ";
    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }
    
    result = binarySearch(arr, size, key);
    
    std::cout << "Binary Search: ";
    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }
    
    result = recursiveBinarySearch(arr, 0, size - 1, key);
    
    std::cout << "Recursive Binary Search: ";
    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }
    
    return 0;
}