#include "binary_trees.h"

/**
 * binary_tree_is_full - a fuction that checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 0 if tree is NULL or number of full binary tree nodes.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_node;
	int right_node;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_node = binary_tree_is_full(tree->left);
	right_node = binary_tree_is_full(tree->right);

	return (left_node && right_node);
}
