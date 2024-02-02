#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses the binary tree
 *
 * @func: function to call for each nodei`uuu`
 * @curreent: `uuu`uu
 * Return: None
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && funct)
	{
		func(tree->n);

		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
