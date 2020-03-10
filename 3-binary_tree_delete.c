#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_delete - delete a tree
* @tree: a tree
* Return: pointer to new node or NULL
*/
void binary_tree_delete(binary_tree_t *tree)
{
	
if (!tree)
return ;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);

}
