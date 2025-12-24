#include "BinarySearchTree.h"
#include <iostream>
#include <algorithm> // For max function

void traverseInOrder(Node* root) {
    if (root != NULL) {
        traverseInOrder(root->left);
        std::cout << root->value << std::endl;
        traverseInOrder(root->right);
    }
}

void traversePreOrder(Node* root) {
    if (root != NULL) {
        std::cout << root->value << std::endl;
        traversePreOrder(root->left);
        traversePreOrder(root->right);
    }
}

void traversePostOrder(Node* root) {
    if (root != NULL) {
        traversePostOrder(root->left);
        traversePostOrder(root->right);
        std::cout << root->value << std::endl;
    }
}

int countNodes(Node* root) {
    if (root == NULL) 
        return 0;
    else 
        return 1 + countNodes(root->left) + countNodes(root->right);
}

int depth(Node* root) {
    if (root == NULL) 
        return -1;
    else 
        return 1 + std::max(depth(root->left), depth(root->right));
}

Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    } else if (value <= root->value) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

Node* findMin(Node* root) {
    if (root == NULL) 
        return NULL;
    while (root->left != NULL) 
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, int value) {
    if (root == NULL) 
        return root;
    
    // Find the node to delete
    if (value < root->value) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->value) {
        root->right = deleteNode(root->right, value);
    } else {
        // Node with only one child or no child
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = rsoot->left;
            delete root;
            return temp;
        }
        
        // Node with two children
        Node* temp = findMin(root->right);
        root->value = temp->value;
        root->right = deleteNode(root->right, temp->value);
    }
    return root;
}