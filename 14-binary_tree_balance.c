#include"binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of the tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: the balance factor, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    int left_height = tree->left? (int) binary_tree_height(tree->left) : -1;
    int right_height = tree->right ? (int)binary_tree_height(tree->right) : -1;

    return (left_height - right_height);
}
