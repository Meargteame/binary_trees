#include"binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */

int max(int a, int b) {
    return (a > b) ? a : b;
}
size_t binary_tree_height(const binary_tree_t *tree){
  if (tree ==NULL){
    return (0);
  }
  else{
    return 1 + max(binary_tree_height(tree->left),binary_tree_height(tree->right));
  }
}
