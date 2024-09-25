#include "binary_trees.h"

/**
 *binary_tree_insert_right - insert new node to the right
 *                          of the parent node
 * @parent: the parent node
 * @value: the value of the right new node;
 * Return: the right new node or NULL if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *right;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	right = binary_tree_node(parent, value);
	if (right == NULL)
		return (NULL);

	if (parent->right == NULL)
		parent->right = right;
	else
	{
		temp = parent->right;
		parent->right = right;
		right->right = temp;
	}

	return (right);

}

