#include "SinglyLinkedList.h"
#include <iostream>

SinglyLinkedList::SinglyLinkedList() {
    m_Head = NULL;
}

SinglyLinkedList::~SinglyLinkedList() {
    NodePTR current = m_Head;
    while (current != NULL) {
        NodePTR next = current->next;
        delete current;
        current = next;
    }
}

void SinglyLinkedList::addAtBeginning(int n) {
    NodePTR x = new Node;
    x->value = n;
    x->next = m_Head;
    m_Head = x;
}

void SinglyLinkedList::addAtEnd(int n) {
    NodePTR x = new Node;
    x->value = n;
    x->next = NULL;
    
    if (m_Head == NULL) 
        m_Head = x;
    else {
        NodePTR t = m_Head;
        while (t->next != NULL) 
            t = t->next;
        t->next = x;
    }
}

void SinglyLinkedList::insertIntoSortedList(int n) {
    NodePTR x = new Node;
    x->value = n;
    
    if (m_Head == NULL || n <= m_Head->value) {
        // Add before head
        x->next = m_Head;
        m_Head = x;
    } else {
        // Insert at correct position after head
        NodePTR t = m_Head;
        while (t->next != NULL && t->next->value < n) {
            t = t->next;
        }
        x->next = t->next;
        t->next = x;
    }
}

void SinglyLinkedList::readAndCreate(bool sorted) {
    int val;
    std::cin >> val;
    while (val != 0) {
        if (sorted)
            insertIntoSortedList(val);
        else
            addAtEnd(val);
        std::cin >> val;
    }
}

void SinglyLinkedList::printOut() {
    NodePTR x = m_Head;
    while (x != NULL) {
        std::cout << x->value << " ";
        x = x->next;
    }
    std::cout << std::endl;
}

int SinglyLinkedList::getSize() {
    int i = 0;
    NodePTR x = m_Head;
    while (x != NULL) {
        x = x->next;
        i++;
    }
    return i;
}

bool SinglyLinkedList::isSorted() {
    if (m_Head == NULL || m_Head->next == NULL)
        return true;
    
    NodePTR x = m_Head;
    while (x->next != NULL) {
        if (x->value > x->next->value)
            return false;
        x = x->next;
    }
    return true;
}