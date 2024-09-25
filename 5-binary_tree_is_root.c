#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the a nod is the root of a tree
 * @node: the node to check
 * Return: 1 if the node is the root or 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);
	return (1);
}
