#include"binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree){
  if(tree ==NULL) return (0);
  if(tree->left && tree->right) {
    binary_tree_is_perfect(tree->left);
    binary_tree_is_perfect(tree->right);
  }
  return (1);
}
