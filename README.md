# Binary Search Tree (BST) Template Library for C++

Welcome to the Binary Search Tree (BST) implementation in C++! This repository provides a simple and efficient implementation of a Binary Search Tree along with various tree traversal methods. The implementation is template-based, allowing you to use any data type that supports comparison operators.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Functions](#functions)
  - [Constructor](#constructor)
  - [Preorder Traversal](#preorder-traversal)
  - [Inorder Traversal](#inorder-traversal)
  - [Postorder Traversal](#postorder-traversal)
  - [Insert](#insert)
  - [Level Order Traversal](#level-order-traversal)
- [Time and Space Complexities](#time-and-space-complexities)
<!-- - [License](#license) -->

## Introduction

A Binary Search Tree (BST) is a node-based binary tree data structure where each node has a comparable key (and an associated value) and satisfies the binary search property: the key in each node is greater than the keys in the node's left subtree and less than the keys in the node's right subtree.

## Features

- Template-based implementation
- Preorder, Inorder, and Postorder traversals
- Insertion of elements
- Level Order traversal

## Usage

```cpp
#include "BinaryTree.h"

int main() {
    BinaryTree<int> bst(10);
    bst.insert(5);
    bst.insert(15);
    bst.insert(3);
    bst.insert(7);

    cout << "Preorder Traversal: ";
    bst.preorder();
    cout << endl;

    cout << "Inorder Traversal: ";
    bst.inorder();
    cout << endl;

    cout << "Postorder Traversal: ";
    bst.postorder();
    cout << endl;

    cout << "Level Order Traversal: ";
    bst.traverse();
    cout << endl;

    return 0;
}
```

## Functions

### Constructor

```cpp
BinaryTree(T data);
```

- Description: Initializes the Binary Tree with the given data.
- Time Complexity: O(1)
- Space Complexity: O(1)

### Preorder Traversal

```cpp
void preorder();
```

- Description: Performs a preorder traversal (Root, Left, Right) of the tree.
- Time Complexity: O(n)
- Space Complexity: O(h), where h is the height of the tree.

### Postorder Traversal

```cpp
void postorder();
```

- Description: Performs a postorder traversal (Left, Right, Root) of the tree.
- Time Complexity: O(n)
- Space Complexity: O(h), where h is the height of the tree.

### Insert

```cpp
void insert(T data);
```

Description: Inserts an element into the Binary Search Tree.
Time Complexity: O(h), where h is the height of the tree.
Space Complexity: O(1)

### Level Order Traversal

```cpp
void traverse();
```

- Description: Performs a level order traversal (Breadth-First Search) of the tree.
- Time Complexity: O(n)
- Space Complexity: O(n)

### Time and Space Complexities

- Insert: O(h) time, O(1) space
- Preorder Traversal: O(n) time, O(h) space
- Inorder Traversal: O(n) time, O(h) space
- Postorder Traversal: O(n) time, O(h) space
- Level Order Traversal: O(n) time, O(n) space

---

By understanding and using this BST implementation, you can efficiently manage and traverse your data with ease. Happy coding!
