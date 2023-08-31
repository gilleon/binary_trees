#include "binary_trees.h"

/**
 * _binary_tree_height - helper function for binary_tree_height
 * @tree: pointer to the root node of the tree
 * Return: height of tree
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);

	a = _binary_tree_height(tree->left);
	b = _binary_tree_height(tree->right);
	return (MAX(a, b) + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node the tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_height(tree) - 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: input tree
 * Return: balance factor else 0 if null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int x, y;

	if (!tree)
		return (0);
	x = (tree->left)
		? (int)binary_tree_height(tree->left)
		: -1;
	y = (tree->right)
		? (int)binary_tree_height(tree->right)
		: -1;
	return (x - y);
}
