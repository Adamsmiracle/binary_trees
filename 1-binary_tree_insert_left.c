#include "binary_trees.h"

/**
 * binary_tree_insert_left - adds node to the left of the root
 * @parent: parent of the root
 * @value: data of the new node
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}

	parent->left = newNode;

	return (newNode);
}
