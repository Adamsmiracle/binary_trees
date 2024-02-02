#include "binary_trees.h"

/**
 * binary_tree_inorder - prints the binary tree in order
 * @tree: the binary tree
 * @func: function to act on the tree
 * Return: Void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
