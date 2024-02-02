#include "binary_trees.h"

/**
 * binary_tree_postorder - prints the tree in a post order form
 * @tree: the binary tree
 * @func: function to operate on the data
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
