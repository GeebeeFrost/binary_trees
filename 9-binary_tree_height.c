#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
		return (0);

	if (tree->left)
		left_h = binary_tree_height(tree->left) + 1;
	else
		left_h = 0;
	if (tree->right)
		right_h = binary_tree_height(tree->right) + 1;
	else
		right_h = 0;

	return ((left_h > right_h) ? left_h : right_h);
}
