#include "binary_trees.h"
#include <stdlib.h>
#include <math.h>

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

h = pow(2.0, height + 1) - 1;
if (h == size)
return (1);
else
return (0);
}
