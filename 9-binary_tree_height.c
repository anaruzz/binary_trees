#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_height - height of a binary tree
* @tree: pointer to the root node
* Return: int
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t l, r;

if (!tree || (!(tree->left) && !(tree->right)))
return (0);

l = binary_tree_height(tree->left);
r = binary_tree_height(tree->right);
if (l > r)
return (l + 1);
else
return (r + 1);
}
