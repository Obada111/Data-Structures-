#include "Stack.h"
#include <iostream>

template<class ElementType>
Stack<ElementType>::Stack() {
    top = -1;
}

template<class ElementType>
Stack<ElementType>::~Stack() {
    // Destructor implementation
}

template<class ElementType>
void Stack<ElementType>::clear() {
    top = -1;
}

template<class ElementType>
bool Stack<ElementType>::isEmpty() {
    return top == -1;
}

template<class ElementType>
bool Stack<ElementType>::isFull() {
    return top == MAX - 1;
}

template<class ElementType>
void Stack<ElementType>::push(ElementType element) {
    if (!isFull()) {
        top++;
        data[top] = element;
    }
}

template<class ElementType>
void Stack<ElementType>::pop(ElementType& element) {
    if (!isEmpty()) {
        element = data[top];
        top--;
    }
}

template<class ElementType>
ElementType Stack<ElementType>::peek() {
    if (!isEmpty())
        return data[top];
    // Should handle error case
    return ElementType();
}