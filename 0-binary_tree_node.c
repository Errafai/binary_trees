#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent == NULL)
		return new_node;
	else if (parent->left == NULL)
	{
		new_node->parent = parent;
		parent->left = new_node;
	}
	else if (parent->right == NULL)
	{
		new_node->parent = parent;
		parent->right = new_node;
	}

	return new_node;



}
