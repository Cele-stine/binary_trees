#include "binary_trees.h"

/**
 * binary_tree_is_root - A function that check sif a node is a root.
 * @node: a pointer to the noode to check.
 * Return: 1 if node is a root and 0 if not or if the node is NULL.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return ((node->parent == NULL) ? 1 : 0);
}
