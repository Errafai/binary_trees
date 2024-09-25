#include "binary_trees.h"

/**
 * bianry_tree_postorder - apply the `func` to the BT
 * @tree: the root of the binary tree
 * @func: the function to be applied to the BT
 * Return: nothing just inplemment the function
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
