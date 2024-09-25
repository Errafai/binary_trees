#include "binary_trees.h"

/**
 * binary_tree_preorder - apply the `func` to the BT
 * @tree: the root of the binary tree
 * @func: the function to be applied to the BT
 * Return: nothing just inplemment the function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
