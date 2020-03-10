#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_is_full- checks if a binary tree is full
* @tree: pointer to the root node
* Return: int
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);
else
{
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
}
