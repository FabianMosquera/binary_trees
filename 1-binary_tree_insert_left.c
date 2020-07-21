#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 * @parent: pointer to parent node
 * @value: integer inside each node
 * Return: node address
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = parent->left;
	parent->left = node;
	node->right =  NULL;

	if (node->left)
		node->left->parent = node;


	return (node);
}
