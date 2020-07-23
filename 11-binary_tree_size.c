#include "binary_trees.h"

/**
 * binary_tree_size - function that measures
 * the size of a binary tree
 * @tree: pointer to the root address
 * Return: value of size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t  bt_right = 0, bt_left = 0, bt_total = 0;
	static int stack;

	if (!tree)
		return (0);

	stack += 1;

	if (tree->left)
		bt_left = 1 + binary_tree_size(tree->left);
	if (tree->right)
		bt_right = 1 + binary_tree_size(tree->right);

	bt_total += bt_left + bt_right;

	stack -= 1;

	if (stack == 0)
		bt_total += 1;

	return (bt_total);
}
