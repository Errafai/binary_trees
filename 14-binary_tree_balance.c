#include "binary_trees.h"

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

	r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;

	return (l - r);
}
