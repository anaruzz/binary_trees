#include "binary_trees.h"
#include <stdlib.h>

int _pow_(int x, int y)
{
	if (y > 0)
	{
		return (_pow_(x, y - 1) * x);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (1);
}

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

/**
* binary_tree_is_perfect- checks if a binary tree is full
* @tree: pointer to the root node
* Return: int
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int height, size, h;
if (!tree)
return (0);

height = binary_tree_height(tree);
size = binary_tree_size(tree);

h = _pow_(2.0, height + 1) - 1;
if (h == size)
return (1);
else
return (0);
}
