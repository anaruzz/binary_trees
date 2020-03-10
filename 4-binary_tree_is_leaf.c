#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: a node in a tree
* Return: int
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{

if (!node)
return (0);

if (node->left == NULL && node->right == NULL)
return (1);

return (0);
}
