#include "binary_trees.h"

/**
 * binary_tree_leaves - calculate the leaves of a binary tree
 * @tree: the root of the binary tree
 * Return: the leaves of the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	r = binary_tree_leaves(tree->right);
	l = binary_tree_leaves(tree->left);

	return (r + l);
}
