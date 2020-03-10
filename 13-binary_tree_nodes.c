#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_nodes - pre-order traversal of a binary tree
* @tree: pointer to the root node
* Return: size_t
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{


if (!tree || (tree->left == NULL && tree->right == NULL))
return (0);

return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
