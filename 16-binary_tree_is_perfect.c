#include "binary_trees.h"
/**
 * _pow - raises base to the power of exp
 * @base: base number
 * @exp: power to be raised to of base number
 * Return: math answer
 */
long int _pow(int base, int exp)
{
	int up;
	long int res;

	res = base;
	for (up = 0; up < exp; up++)
		res *= base;
	return (res);
}
/**
 * binary_tree_height - count a height of a binary tree
 * @tree: input entire tree
 * Return: height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r = 0, height_l = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		height_l = binary_tree_height(tree->left);
		height_r = binary_tree_height(tree->right);
		return (1 + (height_l > height_r ? height_l : height_r));
	}
	return (0);
}
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of the tree
 * If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t num_nodes = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		num_nodes += binary_tree_size(tree->left);
	if (tree->right != NULL)
		num_nodes += binary_tree_size(tree->right);
	return (num_nodes + 1);
}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to root node of the tree to check
 * Return: 1 if tree is perfect,
 * otherwise, function return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	unsigned int height = 0;
	unsigned int n_nodes = 0;

	if (!tree)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	height = binary_tree_height(tree);
	n_nodes = binary_tree_size(tree);
	if (n_nodes == _pow(2, height) - 1)
		return (1);
	else
		return (0);
}
