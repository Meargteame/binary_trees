#Binary Tree
-is a non-linear data structure where each node has at most two children.
In this article, we will cover all the basics of Binary Tree, Operations on Binary Tree, its implementation, advantages, disadvantages which will help you solve all the problems based on Binary Tree.

https://media.geeksforgeeks.org/wp-content/uploads/20240503093046/Introduction-to-Binary-Tree.webp

#Binary tree

is a tree data structure(non-linear) in which each node can have at most two children which are referred to as the left child and the right child.

The topmost node in a binary tree is called the root, and
the bottom-most nodes are called leaves.

A binary tree can be visualized as a hierarchical structure with the root at the top and the leaves at the bottom.

#Representation of Binary Tree
Each node in a Binary Tree has three parts:

Data
Pointer to the left child
Pointer to the right child

https://media.geeksforgeeks.org/wp-content/uploads/20240411114233/Representation-of-Binary-Tree.webp

#Below is the representation of a Node of Binary Tree C:

struct Node{
int data;
struct Node*left;
struct Node*right;
}

#Operations On Binary Tree

#1. Insertion in Binary Tree
We can insert a node anywhere in a binary tree by inserting the node as the left or right child of any node or by making the node as root of the tree.

Algorithm to insert a node in a Binary Tree:

Check if there is a node in the binary tree, which has missing left child. If such a node exists, then insert the new node as its left child.
Check if there is a node in the binary tree, which has missing right child. If such a node exists, then insert the new node as its right child.
If we don’t find any node with missing left or right child, then find the node which has both the children missing and insert the node as its left or right child.
