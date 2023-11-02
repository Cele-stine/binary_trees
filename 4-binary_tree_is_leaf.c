#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A function that checks whwther a node is a leaf.
 * @node: A pointer to the node to check.
 * Return: 0 if node is NULL or is not a leaf and 1 if node is a leaf.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}
