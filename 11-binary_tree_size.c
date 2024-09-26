#include "binary_trees.h"

/**
 * binary_tree_size - calculate the size of a binary tree
 * @tree: the root of the binary tree
 * Return: the size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;

	if (tree == NULL)
		return (0);

	r = binary_tree_size(tree->right);
	l = binary_tree_size(tree->left);

	return (1 + r + l);
}
