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

	left_height = tree->left ?  binary_tree_height(tree->left) + 1 : 1;
	right_height = tree->right ?  binary_tree_height(tree->right) + 1 : 1;

	return ((left_height > right_height) ? left_height : right_height);
}

/**
 * binary_tree_balance - A function that measures the balance factor of a
 * binary tree.
 * @tree: A pointer to the root node to measure the balance factor of.
 * Return: Balance factor of a tree or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}
