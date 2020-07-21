#include "binary_trees.h"
/**
 * binary_tree_postorder - print binary tree postorder
 * @tree: input entire tree
 * @func: input print function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
    /*Step 1: Recursively traverse left subtree*/
	binary_tree_postorder(tree->left, func);
    /*Step 2: Recursively traverse right subtree*/
	binary_tree_postorder(tree->right, func);
    /*Step 3: print in order the tree */
	func(tree->n);
}