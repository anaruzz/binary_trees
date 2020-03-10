#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_depth - height of a binary tree
* @tree: pointer to the root node
* Return: int
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
binary_tree_t *pt;

pt = (binary_tree_t *)tree;

if (!tree)
return (0);

while (pt->parent)
{
pt = pt->parent;
depth++;
}
return (depth);
}
