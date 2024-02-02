#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the node is the root or not
 *  @node: input node
 * Return: 1 if success otherwise false
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
