#include"binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of the tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: the balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree){

  if (tree == NULL){
    return (0);
  }

  else{
    return binary_tree_height(tree->left) - binary_tree_height(tree->right);
  }
}
