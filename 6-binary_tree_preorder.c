#include "binary_trees.h"

/**
 * binary_tree_preorder - A fuction that that trsansverses using pre-order.
 * @tree: a pointer to the root node of the tree to transverse.
 * @func: A pointer to a function to call each node.
 * @int: The value in the node.
 * Return: Nothing.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
