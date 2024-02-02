
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node to the right of node
 * @parent: parent of the new node
 * @value: data of the new node
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t newNode;

	if (parent == NULL)
	{
		return (NULL);
	}
	newNode = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		newNode->right = parent->ritht
		parent->right->parent = newNode;
	}

	parent->right = newNode;

	return (newNode);
}
