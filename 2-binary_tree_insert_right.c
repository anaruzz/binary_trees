#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right child of another node
* @parent: pointer to the parent node
* @value: value to put in new node
* Return: pointer to new node or NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (!parent)
return (NULL);

new_node = malloc(sizeof(binary_tree_t));
if (!new_node)
return (NULL);

new_node->parent = parent;
new_node->n = value;
new_node->right = parent->right;
parent->right = new_node;

if (new_node->right)
{
new_node->right->parent = new_node;
}

new_node->left = NULL;

return (new_node);
}
