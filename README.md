# Data Structures Repository

This repository contains implementations of fundamental data structures and algorithms as taught in the Data Structures course (5050) at Palestine Polytechnic University by Dr. Zein Salah.

## Overview

This repository provides C++ implementations of essential data structures and algorithms. Each implementation is designed to be educational and easy to understand, focusing on internal logic rather than relying on built-in libraries.  
The code follows modern C++20 standards and includes examples demonstrating the usage of each data structure.

## Data Structures and Algorithms Explained

### 1. Arrays

An array is a collection of elements of the same type stored in contiguous memory locations.

Features:
- Dynamic array creation with custom size
- Reading and writing array elements
- Sorting functionality
- Copying and comparison operations
- Template-based design for different data types

Key operations: read(), write(), sort(), copyFrom(), isEqual()

### 2. Singly Linked Lists

A singly linked list is a linear data structure where each node contains a value and a reference to the next node.

Features:
- Adding nodes at the beginning and end
- Inserting elements into a sorted list
- Reading input and creating a list
- Printing the list
- Checking if the list is sorted

Key operations: addAtBeginning(), addAtEnd(), insertIntoSortedList(), readAndCreate(), printOut()

### 3. Doubly Linked Lists

A doubly linked list allows traversal in both directions by storing references to both the next and previous nodes.

Features:
- Bidirectional traversal
- Same core operations as singly linked lists

### 4. Stacks

A stack is a Last-In-First-Out (LIFO) data structure implemented using an array.

Features:
- Fixed maximum size
- Efficient push and pop operations

Key operations: push(), pop(), peek(), isFull(), isEmpty()

### 5. Queues

A queue is a First-In-First-Out (FIFO) data structure implemented using a circular array.

Features:
- Efficient memory usage
- Constant-time enqueue and dequeue

Key operations: enqueue(), dequeue(), peek(), isFull(), isEmpty()

### 6. Binary Search Trees (BST)

A Binary Search Tree is a hierarchical structure where left children are smaller and right children are larger than the parent.

Features:
- Recursive insertion and deletion
- Multiple traversal techniques

Key operations: insert(), deleteNode(), traverseInOrder(), traversePreOrder(), traversePostOrder(), countNodes(), depth()

### 7. Graphs

Graphs are implemented using an adjacency matrix representation.

Features:
- Depth-first and breadth-first traversal
- Shortest path computation

Key operations: addEdge(), traverseDFS(), traverseBFS(), shortestPathDijkstras()

### 8. STL Examples

Demonstrates usage of C++ Standard Template Library containers:
- vector
- set
- map

### 9. Sorting Algorithms

Included sorting techniques:
- Bubble Sort
- Merge Sort

### 10. Searching Algorithms

Included searching techniques:
- Linear Search
- Binary Search

## How to Build and Run

Prerequisites:
- C++20 compatible compiler (g++ or clang)
- CMake (optional)

The project can be built either using CMake or by compiling source files manually with a C++20 compiler.

## Usage

The main program demonstrates:
- Array manipulation
- Linked list operations
- Stack and queue usage
- Binary search tree traversals
- Graph algorithms
- STL container usage
- Sorting and searching algorithms

## Academic Reference

Some implementations are inspired by the Data Structures course materials prepared by Dr. Zein Salah at Palestine Polytechnic University.

This repository is intended for educational purposes.
