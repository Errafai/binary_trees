#include "binary_trees.h"

/**
 *binary_tree_insert_left - insert new node to the left
 *                          of the parent node
 * @parent: the parent node
 * @value: the value of the left new node;
 * Return: the left new node or NULL if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *left;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	left = binary_tree_node(parent, value);
	if (left == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		temp = parent->left;
		left->left = temp;
		temp->parent = left;
	}
	parent->left = left;

	return (left);

}

