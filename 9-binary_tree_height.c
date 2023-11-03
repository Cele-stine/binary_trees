#include "binary_trees.h"
/**
 * binary_tree_height - A function that measures the height of a binary tree.
 * @tree: A pointer to the root nodr of a tree.
 * Return: The height of the tree or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = (tree->left) ?  binary_tree_height(tree->left) + 1 : 0;
	right_height = tree->right ?  binary_tree_height(tree->right) + 1 : 0;

	return ((left_height > right_height) ? left_height : right_height);
}
