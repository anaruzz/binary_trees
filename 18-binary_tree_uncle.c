#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_is_full- checks if a binary tree is full
* @tree: pointer to the root node
* Return: int
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || node->parent == NULL || node->parent->parent == NULL)
return (NULL);

if (node->parent->parent->left == node->parent)
{
  return (node->parent->parent->right);
}
return (node->parent->parent->left);
}
