#include "Queue.h"
#include <iostream>

template<class ElementType>
Queue<ElementType>::Queue() {
    front = rear = -1;
}

template<class ElementType>
Queue<ElementType>::~Queue() {
    // Destructor implementation
}

template<class ElementType>
void Queue<ElementType>::clear() {
    front = rear = -1;
}

template<class ElementType>
bool Queue<ElementType>::isEmpty() {
    return (front == -1 && rear == -1);
}

template<class ElementType>
bool Queue<ElementType>::isFull() {
    return (front == 0 && rear == MAX - 1) || (rear == front - 1);
}

template<class ElementType>
void Queue<ElementType>::enqueue(ElementType element) {
    if (!isFull()) {
        if (isEmpty()) {
            front = rear = 0;
        } else if (rear == MAX - 1) {
            rear = 0;
        } else {
            rear++;
        }
        data[rear] = element;
    }
}

template<class ElementType>
void Queue<ElementType>::dequeue(ElementType& element) {
    if (!isEmpty()) {
        element = data[front];
        if (front == rear) {
            front = rear = -1;
        } else if (front == MAX - 1) {
            front = 0;
        } else {
            front++;
        }
    }
}

template<class ElementType>
ElementType Queue<ElementType>::peek() {
    if (!isEmpty())
        return data[front];
    // Should handle error case
    return ElementType();
}