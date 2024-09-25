#include "binary_trees.h"

/**
 * binary_tree_inorder - apply the `func` to the BT
 * @tree: the root of the binary tree
 * @func: the function to be applied to the BT
 * Return: nothing just inplemment the function
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
