#include "binary_trees.h"

/**
 * binary_tree_nodes - calculate the nodes with one child of a binary tree
 * @tree: the root of the binary tree
 * Return: the nodes of the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->right) +  binary_tree_nodes(tree->left) + 1);
	return (0);

}
