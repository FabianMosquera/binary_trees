#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: integer if is leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
		/* leaf is where both of them point a null */
		if (!node->left && !node->right)
			return (1);
	return (0);
}
