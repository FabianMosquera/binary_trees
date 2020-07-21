#include "binary_trees.h"
/**
 * binary_tree_depth - count a depth of a binary tree
 * @tree: input entire tree
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i = 0;

	if (!tree)
		return (0);
	if (tree->parent)
	{
		i += binary_tree_depth(tree->parent);
		i++;
	}
	return (i);
}
