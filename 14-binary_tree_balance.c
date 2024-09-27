#include "binary_trees.h"

/**
 * binary_tree_height - calculate the height of a binary tree
 * @tree: the root of the binary tree
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	r = binary_tree_height(tree->right);
	l = binary_tree_height(tree->left);

	return (1 + (l > r ? l : r));
}

/**
 * binary_tree_balance - calculate the balance of a binary tree
 * @tree: the root of the binary tree
 * Return: the balance of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (tree == NULL)
		return (0);

	l = binary_tree_height(tree->left);

	r = binary_tree_height(tree->right);

	return (l - r);
}
