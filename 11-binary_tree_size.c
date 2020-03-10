#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_size - pre-order traversal of a binary tree
* @tree: pointer to the root node
* Return: size_t
*/
size_t binary_tree_size(const binary_tree_t *tree)
{

if (!tree)
return (0);
else
return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));

}
