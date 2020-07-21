#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value of the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	NewNode = malloc(sizeof(binary_tree_t));
	if (NewNode == NULL)
		return (NULL);

	/* create the binary tree with new nodes */
	NewNode->parent = parent;
	NewNode->n = value;
	NewNode->left = NULL;
	NewNode->right = NULL;
	return (NewNode);
}