# 🚀 Data Structures Repository

[![C++](https://img.shields.io/badge/C%2B%2B-17%2B-blue.svg)](https://en.wikipedia.org/wiki/C%2B%2B)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![GitHub issues](https://img.shields.io/github/issues/Obada111/data-structure-cpp)](https://github.com/Obada111/data-structure-cpp/issues)
[![GitHub stars](https://img.shields.io/github/stars/Obada111/data-structure-cpp)](https://github.com/Obada111/data-structure-cpp)

> 🎯 **A Comprehensive Collection of Data Structures & Algorithms Implementation in Modern C++**
>
> Perfect for **Competitive Programming**, **Technical Interviews**, and **Algorithm Learning**

> Some implementations are inspired by the Data Structures course materials prepared by Dr. Zein Salah at Palestine Polytechnic University.

---

## 📚 Table of Contents

- [Overview](#overview)
- [Data Structures](#data-structures)
- [Algorithms](#algorithms)
- [Installation & Setup](#installation--setup)
- [File Structure](#file-structure)
- [Complete Documentation](#complete-documentation)
- [Usage Examples](#usage-examples)
- [Complexity Analysis](#complexity-analysis)
- [Contributing](#contributing)

---

## 🎯 Overview

This repository contains **professional-grade implementations** of essential data structures and algorithms in C++. Each implementation includes:

✅ **Complete Source Code** - Well-commented, optimized implementations  
✅ **Detailed Documentation** - Complexity analysis and use cases  
✅ **Practical Examples** - Real-world usage demonstrations  
✅ **Visual Diagrams** - ASCII art explaining concepts  
✅ **Test Cases** - Comprehensive example usage  

---

## 📊 Data Structures

### 1. 📦 Array & Vector
```
═══════════════════════════════════════════
            ARRAY STRUCTURE
═══════════════════════════════════════════

        [0] [1] [2] [3] [4] [5] ... [n-1]
         ↓   ↓   ↓   ↓   ↓   ↓       ↓
        [5] [10][15][20][25][30]...[100]

Index:   0   1   2   3   4   5   ...  n-1
Value:   5   10  15  20  25  30      100

═══════════════════════════════════════════
```

**File:** `srcArray.cpp`

**Characteristics:**
- ✅ **Fast Access:** O(1) index-based access
- ✅ **Contiguous Memory:** Cache-friendly
- ✅ **Fixed Size:** Determined at creation
- ❌ **Slow Insertion:** O(n) in middle

**Use Cases:**
- Random access to elements
- Cache-sensitive applications
- Data storage and retrieval

**Key Operations:**
```cpp
Array arr(10);              // Create array of size 10
arr[0] = 5;                 // Access element - O(1)
arr.insert(2, 15);          // Insert - O(n)
arr.display();              // Display all - O(n)
```

**Time Complexity:**
| Operation | Time |
|-----------|------|
| Access | O(1) |
| Search | O(n) |
| Insert | O(n) |
| Delete | O(n) |

---

### 2. 🔗 Singly Linked List

```
═══════════════════════════════════════════
       SINGLY LINKED LIST (SLL)
═══════════════════════════════════════════

    HEAD
     ↓
   ┌─────────┐     ┌─────────┐     ┌─────────┐
   │ Data: 5 │────→│ Data:10 │────→│Data: 15 │
   │ Next: ──┼─────┤ Next: ──┼─────┤ Next:NULL
   └─────────┘     └─────────┘     └─────────┘
     Node 1          Node 2           Node 3

Memory Layout:
┌──────────────┬──────────────┬──────────────┐
│  5  | ××××   │  10 | ××××   │  15 | NULL   │
└──────────────┴──────────────┴──────────────┘

═══════════════════════════════════════════
```

**File:** `srcSinglyLinkedList.cpp`

**Characteristics:**
- ✅ **Dynamic Size:** Grows as needed
- ✅ **Easy Insertion/Deletion:** O(1) if position known
- ❌ **Slow Access:** O(n) to find element
- ❌ **Sequential Access Only:** Must traverse from head

**Use Cases:**
- Dynamic data that changes frequently
- Queue implementation
- Polynomial representation
- Hash table chaining

**Key Operations:**
```cpp
SLL list;
list.insert_at_head(5);          // Insert at head - O(1)
list.insert_at_tail(15);         // Insert at tail - O(n)
list.insert_at_position(2, 10);  // Insert at position - O(n)
list.delete_node(10);            // Delete value - O(n)
list.display();                  // Display all - O(n)
```

**Time Complexity:**
| Operation | Time |
|-----------|------|
| Access | O(n) |
| Search | O(n) |
| Insert Head | O(1) |
| Insert Tail | O(n) |
| Delete | O(n) |

---

### 3. 🔄 Doubly Linked List

```
═══════════════════════════════════════════
      DOUBLY LINKED LIST (DLL)
═══════════════════════════════════════════

            Bidirectional Navigation
     
     HEAD
      ↓
   ┌──────────────┐   ┌──────────────┐   ┌──────────────┐
   │ ←→ 5 ←→ ──→ │─→ │ ←→ 10 ←→ ──→ │─→ │ ←→ 15 ←→ ──→ │
   │              │   │              │   │      NULL    │
   └──────────────┘   └──────────────┘   └──────────────┘
   
   Can traverse both:
   Forward:  5 → 10 → 15 → NULL
   Backward: 15 → 10 → 5 → NULL

═══════════════════════════════════════════
```

**File:** `srcDoublyLinkedList.cpp`

**Characteristics:**
- ✅ **Bidirectional Traversal:** Forward AND backward
- ✅ **Flexible Insertion/Deletion:** O(1) if position known
- ❌ **More Memory:** Extra pointer per node
- ❌ **Slower Access:** Still O(n)

**Use Cases:**
- Browser history (forward/backward)
- Text editors (undo/redo)
- LRU cache implementation
- Music playlists (previous/next)

**Key Operations:**
```cpp
DLL list;
list.insert_at_head(5);          // Insert at head - O(1)
list.insert_at_tail(15);         // Insert at tail - O(n)
list.insert_at_position(2, 10);  // Insert at position - O(n)
list.delete_node(10);            // Delete value - O(n)
list.display_forward();          // Forward display - O(n)
list.display_backward();         // Backward display - O(n)
```

**Time Complexity:**
| Operation | Time |
|-----------|------|
| Access | O(n) |
| Search | O(n) |
| Insert Head | O(1) |
| Delete | O(n) |

---

### 4. 📚 Stack

```
═══════════════════════════════════════════
         STACK (LIFO - Last In First Out)
═══════════════════════════════════════════

        PUSH & POP from TOP only

           ┌─────────┐
    Push 5 │  5 ←TOP │  Pop → Returns 5
           ├─────────┤
    Push10 │   10    │
           ├─────────┤
    Push15 │   15    │
           ├─────────┤
           │ Base    │
           └─────────┘

Operations Timeline:
1. Push 5    → [5]
2. Push 10   → [5, 10]
3. Push 15   → [5, 10, 15] ← TOP
4. Pop       → [5, 10]
5. Pop       → [5]

═══════════════════════════════════════════
```

**File:** `srcStack.cpp`

**Characteristics:**
- ✅ **LIFO Behavior:** Last element accessed first
- ✅ **O(1) Operations:** Push, pop, peek all O(1)
- ✅ **Simple & Fast:** Efficient memory usage
- ⚠️ **Limited Access:** Only top element accessible

**Use Cases:**
- **Function Call Stack:** Program execution
- **Expression Evaluation:** Parsing math expressions
- **Browser History:** Back button functionality
- **Undo/Redo:** Text editors
- **Parenthesis Matching:** Compiler syntax checking
- **Depth-First Search:** Graph traversal

**Key Operations:**
```cpp
Stack<int> stack;
stack.push(5);           // Add element - O(1)
stack.push(10);
stack.push(15);
int top = stack.pop();   // Remove & return - O(1) - top=15
int peek = stack.peek(); // View top - O(1) - peek=10
bool empty = stack.empty(); // Check if empty - O(1)
stack.display();         // Display all - O(n)
```

**Time Complexity:**
| Operation | Time |
|-----------|------|
| Push | O(1) |
| Pop | O(1) |
| Peek | O(1) |
| IsEmpty | O(1) |

**Real-World Example:**
```
Browser Navigation Stack:
┌─────────────────┐
│ www.google.com  │ ← TOP (current)
├─────────────────┤
│ www.github.com  │
├─────────────────┤
│ www.youtube.com │
├─────────────────┤
│ www.facebook.com│
└─────────────────┘

Click BACK → Pop google.com, now at github.com
```

---

### 5. 🚶 Queue

```
═══════════════════════════════════════════
      QUEUE (FIFO - First In First Out)
═══════════════════════════════════════════

    ENQUEUE from REAR | DEQUEUE from FRONT

    ┌──────┬──────┬──────┬──────┐
    │ 5    │ 10   │ 15   │ 20   │
    └──────┴──────┴──────┴──────┘
   FRONT                        REAR

Line at Theater:
Enqueue: 5 → 10 → 15 → 20 (joining line from back)
Dequeue: 5 → 10 → 15 (getting ticket from front)

Operations Timeline:
1. Enqueue 5    → [5]
2. Enqueue 10   → [5, 10]
3. Enqueue 15   → [5, 10, 15]
4. Dequeue      → [10, 15] (removed 5)
5. Dequeue      → [15] (removed 10)

═══════════════════════════════════════════
```

**File:** `srcQueue.cpp`

**Characteristics:**
- ✅ **FIFO Behavior:** First element accessed first
- ✅ **O(1) Operations:** Enqueue, dequeue both O(1)
- ✅ **Fair Access:** First come, first served
- ⚠️ **Limited Access:** Only front element accessible

**Use Cases:**
- **Print Queue:** Jobs printed in order
- **CPU Scheduling:** Process scheduling
- **BFS Algorithm:** Graph traversal
- **Message Queues:** System messaging
- **Customer Service:** Ticket systems
- **Keyboard Buffer:** Keystroke buffering

**Key Operations:**
```cpp
Queue<int> queue;
queue.enqueue(5);        // Add to rear - O(1)
queue.enqueue(10);
queue.enqueue(15);
int front = queue.dequeue(); // Remove from front - O(1)
int peek = queue.peek(); // View front - O(1)
bool empty = queue.empty(); // Check if empty - O(1)
queue.display();         // Display all - O(n)
```

**Time Complexity:**
| Operation | Time |
|-----------|------|
| Enqueue | O(1) |
| Dequeue | O(1) |
| Peek | O(1) |
| IsEmpty | O(1) |

**Real-World Example:**
```
Supermarket Checkout Queue:
FRONT                           REAR
│                               │
v                               v
┌──────┬──────┬──────┬──────┐
│ John │ Jane │ Mike │ Lisa │  (waiting)
└──────┴──────┴──────┴──────┘

Dequeue John (checkout) → [Jane, Mike, Lisa]
Enqueue Tom (joins line) → [Jane, Mike, Lisa, Tom]
```

---

### 6. 🌳 Binary Search Tree

```
═══════════════════════════════════════════
         BINARY SEARCH TREE (BST)
═══════════════════════════════════════════

Property: Left < Parent < Right

           ┌─────────────┐
           │      50     │ (Root)
           └──────┬──────┘
                  │
        ┌─────────┴─────────┐
        │                   │
    ┌───▼───┐           ┌───▼───┐
    │  30   │           │  70   │
    └───┬───┘           └───┬───┘
        │                   │
    ┌───┴───┐           ┌───┴───┐
    │       │           │       │
 ┌──▼──┐ ┌──▼──┐     ┌──▼──┐ ┌──▼──┐
 │ 20  │ │ 40  │     │ 60  │ │ 80  │
 └─────┘ └─────┘     └─────┘ └─────┘

In-Order Traversal: 20→30→40→50→60→70→80 (SORTED!)

═══════════════════════════════════════════
```

**File:** `srcBinarySearchTree.cpp`

**Characteristics:**
- ✅ **Ordered Structure:** In-order traversal gives sorted output
- ✅ **Fast Search:** O(log n) average case
- ✅ **Dynamic Size:** Grows as needed
- ⚠️ **Can Degrade:** Becomes O(n) if unbalanced

**Use Cases:**
- **Database Indexing:** Fast lookups
- **File Systems:** Directory structures
- **Expression Parsing:** Math expression evaluation
- **Auto-complete Systems:** Prefix matching
- **Priority Queues:** Heap-based implementations

**Key Operations:**
```cpp
BST tree;
tree.insert(50);         // Insert - O(log n) avg
tree.insert(30);
tree.insert(70);
bool found = tree.search(40);     // Search - O(log n) avg
tree.delete_node(30);    // Delete - O(log n) avg
tree.inorder();          // Display sorted - O(n)
tree.preorder();         // Pre-order traversal - O(n)
tree.postorder();        // Post-order traversal - O(n)
```

**Time Complexity:**
| Operation | Best | Average | Worst |
|-----------|------|---------|-------|
| Search | O(1) | O(log n) | O(n) |
| Insert | O(log n) | O(log n) | O(n) |
| Delete | O(log n) | O(log n) | O(n) |

**Traversal Comparison:**
```
Tree:       50
           /  \
          30   70
         / \   / \
        20 40 60 80

In-order   (Left-Root-Right):    20→30→40→50→60→70→80 ✓ SORTED
Pre-order  (Root-Left-Right):    50→30→20→40→70→60→80
Post-order (Left-Right-Root):    20→40→30→60→80→70→50
Level-order(BFS):                50→30→70→20→40→60→80
```

---

## 🔍 Algorithms

### 1. 🎯 Searching Algorithms

**File:** `srcSearchingAlgorithms.cpp`

#### Linear Search
```
═══════════════════════════════════════════
         LINEAR SEARCH (Sequential)
═══════════════════════════════════════════

Array: [5] [10] [15] [20] [25] [30]

Search for 20:
Step 1: Check [5]  ? No
Step 2: Check [10] ? No
Step 3: Check [15] ? No
Step 4: Check [20] ? YES! → Found at index 3

Time: O(n) - Check each element one by one

═══════════════════════════════════════════
```

**Use When:**
- Array is **unsorted**
- Array is **small**
- **Simple implementation** needed

**Time Complexity:**
| Case | Time |
|------|------|
| Best | O(1) |
| Average | O(n) |
| Worst | O(n) |

---

#### Binary Search
```
═══════════════════════════════════════════
        BINARY SEARCH (Divide & Conquer)
═══════════════════════════════════════════

Sorted Array: [5] [10] [15] [20] [25] [30] [35] [40]
Indices:      0    1    2    3    4    5    6    7

Search for 20:
               
Round 1: Mid = 3 → [20]
        20 == 20 ? YES! Found at index 3

Search for 25:

Round 1: Mid = 3 → [20]
        25 > 20 ? Search RIGHT half

       [25] [30] [35] [40]
         
Round 2: Mid = 5 → [30]
        25 < 30 ? Search LEFT half
        
       [25]
Round 3: Mid = 4 → [25]
        25 == 25 ? YES! Found at index 4

Time: O(log n) - Eliminate half each round

═══════════════════════════════════════════
```

**Use When:**
- Array is **sorted**
- Array is **large**
- **Speed is important**

**Time Complexity:**
| Case | Time |
|------|------|
| Best | O(1) |
| Average | O(log n) |
| Worst | O(log n) |

**Comparison:**
```
Array Size: 1,000,000 elements

Linear Search:  1,000,000 comparisons (worst case)
Binary Search:  20 comparisons (worst case)

Speed Difference: 50,000x FASTER!
```

---

## 📁 File Structure

```
📦 data-structure-cpp
 ┣ 📂 include/ds
 ┃ ┗ 📄 [Header files for all data structures]
 ┣ 📄 srcArray.cpp              ← Array implementation
 ┣ 📄 srcSinglyLinkedList.cpp   ← SLL implementation
 ┣ 📄 srcDoublyLinkedList.cpp   ← DLL implementation
 ┣ 📄 srcStack.cpp              ← Stack implementation
 ┣ 📄 srcQueue.cpp              ← Queue implementation
 ┣ 📄 srcBinarySearchTree.cpp   ← BST implementation
 ┣ 📄 srcSearchingAlgorithms.cpp ← Search algorithms
 ┣ 📄 srcSTLExamples.cpp        ← STL examples & tips
 ┣ 📄 srcmain.cpp               ← All examples & demos
 ┗ 📄 README.md                 ← This file
```

---

## 🛠️ Installation & Setup

### Prerequisites
- **C++ Compiler:** GCC, Clang, or MSVC (C++17 or higher)
- **Git:** For cloning repository
- **Make:** (Optional) For build automation

### Quick Start

**1. Clone Repository:**
```bash
git clone https://github.com/Obada111/data-structure-cpp.git
cd data-structure-cpp
```

**2. Compile All Files:**
```bash
# Compile main program
g++ -std=c++17 -O2 srcmain.cpp -o run

# Or compile with all source files
g++ -std=c++17 -O2 srcArray.cpp srcStack.cpp srcQueue.cpp srcBinarySearchTree.cpp srcmain.cpp -o run
```

**3. Run Program:**
```bash
./run
```

### Individual Compilation

**Compile and run individual data structure:**
```bash
# Array
g++ -std=c++17 srcArray.cpp -o array && ./array

# Stack
g++ -std=c++17 srcStack.cpp -o stack && ./stack

# Queue
g++ -std=c++17 srcQueue.cpp -o queue && ./queue

# Linked Lists
g++ -std=c++17 srcSinglyLinkedList.cpp -o sll && ./sll
g++ -std=c++17 srcDoublyLinkedList.cpp -o dll && ./dll

# Binary Search Tree
g++ -std=c++17 srcBinarySearchTree.cpp -o bst && ./bst

# Searching Algorithms
g++ -std=c++17 srcSearchingAlgorithms.cpp -o search && ./search
```

---

## 💡 Usage Examples

### Array Example
```cpp
#include "srcArray.cpp"

int main() {
    Array arr(10);
    arr[0] = 5;
    arr[1] = 10;
    arr[2] = 15;
    
    arr.display();    // Output: 5 10 15 0 0 0 ...
    arr.insert(1, 7); // Insert 7 at index 1
    arr.display();    // Output: 5 7 10 15 0 0 ...
    
    return 0;
}
```

### Stack Example
```cpp
Stack<int> stack;
stack.push(10);
stack.push(20);
stack.push(30);

cout << stack.pop();  // Output: 30
cout << stack.peek(); // Output: 20
stack.display();      // Output: 10 20
```

### Queue Example
```cpp
Queue<int> queue;
queue.enqueue(5);
queue.enqueue(10);
queue.enqueue(15);

cout << queue.dequeue(); // Output: 5
cout << queue.peek();    // Output: 10
queue.display();         // Output: 10 15
```

### BST Example
```cpp
BST tree;
tree.insert(50);
tree.insert(30);
tree.insert(70);
tree.insert(20);
tree.insert(40);

tree.inorder();   // Output: 20 30 40 50 70
if (tree.search(40)) {
    cout << "Found!";
}
tree.delete_node(30);
tree.inorder();   // Output: 20 40 50 70
```

---

## 📊 Complexity Analysis Chart

### Access Time Comparison

```
Data Structure          Access  Search  Insert  Delete
────────────────────────────────────────────────────────
Array                   O(1)    O(n)    O(n)    O(n)
Singly Linked List      O(n)    O(n)    O(1)*   O(n)
Doubly Linked List      O(n)    O(n)    O(1)*   O(n)
Stack                   -       -       O(1)    O(1)
Queue                   -       -       O(1)    O(1)
BST (Balanced)          O(log n) O(log n) O(log n) O(log n)
BST (Unbalanced)        O(n)    O(n)    O(n)    O(n)

* If position is already known
```

### When to Use Each Structure

```
📊 DECISION TREE

Need random access?
├─ YES → Use ARRAY
└─ NO  → Need frequent insertions/deletions?
         ├─ YES → Use LINKED LIST
         └─ NO  → Need specific order?
                 ├─ LIFO (Stack)
                 ├─ FIFO (Queue)
                 └─ Sorted (BST)
```

---

## 🎯 Best Practices

### 1. **Choose Right Data Structure**
```cpp
// ❌ BAD: Using array for frequent insertions
Array arr(1000);
for (int i = 0; i < 1000; i++) {
    arr.insert(0, i);  // O(n) per insertion = O(n²) total!
}

// ✅ GOOD: Using linked list for frequent insertions
LinkedList list;
for (int i = 0; i < 1000; i++) {
    list.insert_at_head(i);  // O(1) per insertion = O(n) total
}
```

### 2. **Memory Efficiency**
```cpp
// ❌ BAD: Creating large array upfront
Array arr(1000000);  // 1M elements, might not use all

// ✅ GOOD: Dynamic allocation
LinkedList list;
while (has_data) {
    list.insert(data);  // Grows as needed
}
```

### 3. **Algorithm Selection**
```cpp
// ❌ BAD: Linear search on large array
int idx = linear_search(arr, 1000000, target);  // O(n)

// ✅ GOOD: Binary search on sorted array
int idx = binary_search(sorted_arr, 1000000, target);  // O(log n)
```

---

## 🚀 Performance Tips

### Optimization Techniques

| Technique | Impact | Example |
|-----------|--------|---------|
| Use BST for sorted data | O(n) → O(log n) | Tree instead of array |
| Use Stack for LIFO | O(n) → O(1) | Function calls |
| Use Queue for FIFO | O(n) → O(1) | Job scheduling |
| Binary search sorted data | O(n) → O(log n) | vs linear search |
| Hash table for lookups | O(n) → O(1) avg | Database indexing |

---

## 📈 Learning Path

### Phase 1: Basics (Week 1)
- [ ] Understand Array operations
- [ ] Learn Singly Linked List
- [ ] Master Stack structure
- [ ] Practice Stack problems

### Phase 2: Intermediate (Week 2)
- [ ] Learn Queue structure
- [ ] Understand Doubly Linked List
- [ ] Master searching algorithms
- [ ] Practice search problems

### Phase 3: Advanced (Week 3-4)
- [ ] Learn Binary Search Tree
- [ ] Understand tree traversals
- [ ] Study tree operations
- [ ] Solve tree problems

### Phase 4: Competitive Programming (Week 5+)
- [ ] Combine structures for complex problems
- [ ] Optimize solutions
- [ ] Learn advanced techniques
- [ ] Compete and practice

---

## 🤝 Contributing

We welcome contributions! To contribute:

1. **Fork** the repository
2. **Create** a new branch (`git checkout -b feature/improvement`)
3. **Make** your changes with comments
4. **Test** thoroughly
5. **Commit** with clear messages
6. **Push** to your branch
7. **Create** a Pull Request

### Contribution Guidelines
- Follow existing code style
- Add comprehensive comments
- Include complexity analysis
- Provide usage examples
- Test thoroughly

---

## 📚 Additional Resources

### Books
- 📖 "Introduction to Algorithms" - CLRS
- 📖 "Data Structures Using C++" - Seymour Lipschutz
- 📖 "Algorithm Design Manual" - Steven Skiena

### Online Platforms
- 🌐 [LeetCode](https://leetcode.com) - Practice problems
- 🌐 [HackerRank](https://hackerrank.com) - Coding challenges
- 🌐 [GeeksforGeeks](https://geeksforgeeks.org) - Tutorials
- 🌐 [Codeforces](https://codeforces.com) - Competitive programming

### Visualization Tools
- 🎨 [VisuAlgo](https://visualgo.net) - Algorithm visualization
- 🎨 [Data Structure Visualizer](https://www.cs.usfca.edu/~galles/visualization/) - Interactive demos

---

## ✨ Key Takeaways

### Remember These Points:

1. **Array** → Fast access O(1), slow insertion O(n)
2. **Linked List** → Fast insertion O(1), slow access O(n)
3. **Stack** → LIFO, O(1) operations
4. **Queue** → FIFO, O(1) operations
5. **BST** → Ordered, O(log n) operations
6. **Linear Search** → O(n), works everywhere
7. **Binary Search** → O(log n), needs sorted data

### Choose Based On:
- **Need speed?** → Use BST or Binary Search
- **Need flexibility?** → Use Linked List
- **Need order?** → Use Stack or Queue
- **Need simplicity?** → Use Array

---

## 📞 Support & Contact

- 📧 **Email:** [jobaobada8@gmail.com]
- 💬 **Issues:** [GitHub Issues](https://github.com/Obada111/data-structure-cpp/issues)
- 💭 **Discussions:** [GitHub Discussions](https://github.com/Obada111/data-structure-cpp/discussions)

---

## 📄 License

This project is licensed under the **MIT License** - see [LICENSE](LICENSE) file for details.

---

## 🙏 Acknowledgments

Special thanks to:
- Contributors who improved the code
- Users who reported issues
- Everyone learning data structures!
- Dr. Zein Salah
  

---

## 🌟 Star History

If this repository helps you, please give it a ⭐ on GitHub!

```
⭐ Star Count Progress
████████████████░░░░ 8/10 stars
```

---

<div align="center">

**Happy Learning! 🚀**

*Master Data Structures, Master Algorithms, Master Coding*

[⬆ back to top](#data-structures-repository)

</div>
