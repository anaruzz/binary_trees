#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_is_full- checks if a binary tree is full
* @tree: pointer to the root node
* Return: int
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || node->parent == NULL)
return (NULL);

if (node->parent->left == node)
{
  return (node->parent->right);
}
if (node->parent->right == node)
{
  return (node->parent->left);
}
return (NULL);
}
