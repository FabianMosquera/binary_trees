#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: input entire tree
 * @func: input print function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	/* Step 1: print in order the tree */
	func(tree->n);
	/* Step 2: Recursively traverse left subtree*/
	binary_tree_preorder(tree->left, func);
	/* Step 3: Recursively traverse right subtree*/
	binary_tree_preorder(tree->right, func);
}
