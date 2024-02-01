#include "binary_tree.h"

/**
 * binary_tree_node - creates binary tree 
 * @parent: parent of the node to be created 
 * @value: value of the node to be created
 * Return: the node created
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;

    newNode = malloc(sizeof(binary_tree_t));

    if (newNode == NULL)
    {
        return (NULL);
    }

    newNode->n = value;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->parent = parent;

    return (newNode);
}