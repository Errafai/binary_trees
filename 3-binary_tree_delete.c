#include "binary_trees.h"

/**
 * binary_tree_delete - delete the entire binary tree
 * @tree: is the root of the binary tree
 * Return: nothing just deleting
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
