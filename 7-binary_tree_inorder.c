#include "binary_trees.h"

/**
 * binary_tree_inorder - a fuction that transverses through a tree using
 * inorder.
 * @tree: A pointer to the root of the tree to transverse.
 * @func: A pointer to a function call to each node.
 * Return: Nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
