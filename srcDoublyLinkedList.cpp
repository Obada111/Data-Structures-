#include "DoublyLinkedList.h"
#include <iostream>

DoublyLinkedList::DoublyLinkedList() {
    m_Head = NULL;
}

DoublyLinkedList::~DoublyLinkedList() {
    NodePTR current = m_Head;
    while (current != NULL) {
        NodePTR next = current->next;
        delete current;
        current = next;
    }
}

void DoublyLinkedList::addAtBeginning(int n) {
    NodePTR x = new Node;
    x->value = n;
    x->next = m_Head;
    x->prev = NULL;
    
    if (m_Head != NULL)
        m_Head->prev = x;
        
    m_Head = x;
}

void DoublyLinkedList::addAtEnd(int n) {
    NodePTR x = new Node;
    x->value = n;
    x->next = NULL;
    
    if (m_Head == NULL) {
        x->prev = NULL;
        m_Head = x;
    } else {
        NodePTR t = m_Head;
        while (t->next != NULL) 
            t = t->next;
        t->next = x;
        x->prev = t;
    }
}

void DoublyLinkedList::insertIntoSortedList(int n) {
    NodePTR x = new Node;
    x->value = n;
    
    if (m_Head == NULL || n <= m_Head->value) {
        // Add before head
        x->next = m_Head;
        x->prev = NULL;
        if (m_Head != NULL)
            m_Head->prev = x;
        m_Head = x;
    } else {
        // Insert at correct position after head
        NodePTR t = m_Head;
        while (t->next != NULL && t->next->value < n) {
            t = t->next;
        }
        x->next = t->next;
        x->prev = t;
        if (t->next != NULL)
            t->next->prev = x;
        t->next = x;
    }
}

void DoublyLinkedList::readAndCreate(bool sorted) {
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

void DoublyLinkedList::printOut() {
    NodePTR x = m_Head;
    while (x != NULL) {
        std::cout << x->value << " ";
        x = x->next;
    }
    std::cout << std::endl;
}

int DoublyLinkedList::getSize() {
    int i = 0;
    NodePTR x = m_Head;
    while (x != NULL) {
        x = x->next;
        i++;
    }
    return i;
}

bool DoublyLinkedList::isSorted() {
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

void concatenateDLL(NodePTR a, NodePTR b) {
    if (a == NULL) 
        a = b;
    else {
        NodePTR x = a;
        while (x->next != NULL) 
            x = x->next;
        x->next = b;
        if (b != NULL) 
            b->prev = x;
    }
}