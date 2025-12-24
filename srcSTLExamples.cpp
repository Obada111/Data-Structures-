#include "STLExamples.h"
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

void vectorExamples() {
    std::vector<int> v;
    for (int i = 1; i <= 5; i++) {
        v.push_back(i);
    }
    
    std::cout << "Vector size: " << v.size() << std::endl;
    if (v.empty()) {
        std::cout << "Vector is empty" << std::endl;
    } else {
        std::cout << "Vector elements: ";
        for (int i = 0; i < v.size(); i++) {
            std::cout << v[i] << " ";
        }
        std::cout << std::endl;
    }
    
    // Using iterators
    std::cout << "Vector elements using iterators: ";
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void setExamples() {
    std::set<int> setOfInt;
    setOfInt.insert(5);
    setOfInt.insert(10);
    setOfInt.insert(15);
    setOfInt.insert(20);
    
    std::cout << "Set size: " << setOfInt.size() << std::endl;
    
    std::cout << "Set elements: ";
    for (std::set<int>::iterator itr = setOfInt.begin(); itr != setOfInt.end(); ++itr) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;
}

void mapExamples() {
    std::map<int, std::string> myMap;
    myMap.insert({1, "one"});
    myMap.insert({2, "two"});
    myMap[3] = "three";
    
    std::cout << "Map element with key 3: " << myMap[3] << std::endl;
    
    std::cout << "Map elements: ";
    for (std::map<int, std::string>::iterator it = myMap.begin(); it != myMap.end(); it++) {
        std::cout << it->first << ":" << it->second << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "=== STL Examples ===" << std::endl;
    vectorExamples();
    setExamples();
    mapExamples();
    
    return 0;
}