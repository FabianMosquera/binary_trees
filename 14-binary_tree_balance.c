#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - function that counts the nodes with at least 1 child
 * @tree: pointer ot the root node of the tree to count numbr of nodes
 * Return: number of nodes with at least one child or
 * If tree is NULL, the function must return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0, bal = 0;

	if (!tree)
		return (0);
	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);

	bal = height_l - height_r;
	bal += (tree->left ? 0 : -1);
	bal -= (tree->right ? 0 : -1);

	return (bal);
}
