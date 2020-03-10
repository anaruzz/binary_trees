#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_is_root - checks if a node is a root
* @node: a node in a tree
* Return: int
*/
int binary_tree_is_root(const binary_tree_t *node)
{

if (!node)
return (0);

if (node->parent == NULL)
return (1);

return (0);
}