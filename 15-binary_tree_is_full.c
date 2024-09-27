#include "binary_trees.h"

/**
 * binary_tree_full - cheacks if the binary tree is full
 * @tree: the root of the tree
 * Return: 1 if it is full or 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);


	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);

	if ((tree->left != NULL && tree->right != NULL) ||
			(tree->left == NULL && tree->right == NULL))
	{
		return (1);
	}


	return (0);

}
