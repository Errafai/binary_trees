#include "binary_trees.h"

/**
 * binary_tree_depth - calculate the depth of a node in BT
 * @tree: the node to calculate the depth
 * Return: (size_t) the depth of the node
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = -1;

	while (tree)
	{
		tree = tree->parent;
		i++;
	}

	return (i);
}
