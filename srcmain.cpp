#include <iostream>
#include "Array.h"
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"
#include "Stack.h"
#include "Queue.h"
#include "BinarySearchTree.h"
#include "Graph.h"

int main() {
    std::cout << "=== Data Structures Examples ===" << std::endl;
    
    // Array example
    {
        std::cout << "\n--- Array Example ---" << std::endl;
        Array<int> a;
        a.read();
        std::cout << "Array size: " << a.getSize() << std::endl;
        a.write();
        
        Array<int> b(3);
        b.setValue(0, 5);
        b.setValue(1, 10);
        b.setValue(2, 15);
        std::cout << "Array B: ";
        b.write();
    }
    
    // Singly Linked List example
    {
        std::cout << "\n--- Singly Linked List Example ---" << std::endl;
        SinglyLinkedList list;
        list.addAtBeginning(10);
        list.addAtEnd(20);
        list.addAtEnd(30);
        list.printOut();
        std::cout << "List size: " << list.getSize() << std::endl;
    }
    
    // Doubly Linked List example
    {
        std::cout << "\n--- Doubly Linked List Example ---" << std::endl;
        DoublyLinkedList dll;
        dll.addAtBeginning(10);
        dll.addAtEnd(20);
        dll.addAtEnd(30);
        dll.printOut();
        std::cout << "DLL size: " << dll.getSize() << std::endl;
    }
    
    // Stack example
    {
        std::cout << "\n--- Stack Example ---" << std::endl;
        Stack<int> stack;
        stack.push(5);
        stack.push(10);
        stack.push(15);
        stack.push(20);
        
        int value;
        stack.pop(value);
        std::cout << "Popped value: " << value << std::endl;
        std::cout << "Top value: " << stack.peek() << std::endl;
    }
    
    // Queue example
    {
        std::cout << "\n--- Queue Example ---" << std::endl;
        Queue<char> queue;
        queue.enqueue('A');
        queue.enqueue('B');
        queue.enqueue('C');
        queue.enqueue('D');
        
        char value;
        queue.dequeue(value);
        queue.dequeue(value);
        std::cout << "Dequeued value: " << value << std::endl;
        std::cout << "Front value: " << queue.peek() << std::endl;
    }
    
    // Binary Search Tree example
    {
        std::cout << "\n--- Binary Search Tree Example ---" << std::endl;
        Node* root = NULL;
        root = insert(root, 15);
        root = insert(root, 10);
        root = insert(root, 20);
        root = insert(root, 8);
        root = insert(root, 12);
        root = insert(root, 17);
        root = insert(root, 25);
        
        std::cout << "In-order traversal: ";
        traverseInOrder(root);
        std::cout << "Pre-order traversal: ";
        traversePreOrder(root);
        std::cout << "Post-order traversal: ";
        traversePostOrder(root);
        
        std::cout << "Number of nodes: " << countNodes(root) << std::endl;
        std::cout << "Tree depth: " << depth(root) << std::endl;
    }
    
    // Graph example
    {
        std::cout << "\n--- Graph Example ---" << std::endl;
        Graph g(6);
        g.addEdge(0, 1, 2);
        g.addEdge(0, 3, 1);
        g.addEdge(1, 2, 3);
        g.addEdge(1, 4, 5);
        g.addEdge(2, 5, 2);
        g.addEdge(3, 4, 4);
        g.addEdge(4, 5, 1);
        
        std::cout << "Adjacency Matrix:" << std::endl;
        g.printAdjMatrix();
        
        std::cout << "\nDFS Traversal (recursive): ";
        g.traverseDFS_rec(0);
        std::cout << std::endl;
        
        std::cout << "BFS Traversal: ";
        g.traverseBFS(0);
        std::cout << std::endl;
        
        std::cout << "\nDijkstra's Shortest Path from node 0:" << std::endl;
        g.shortestPathDijkstras(0);
        g.printShortestPaths();
    }
    
    return 0;
}