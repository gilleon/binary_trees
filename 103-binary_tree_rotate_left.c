#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer to root node of tree
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *hold, *root_tree;
	_Bool root_child = false;

	if (!tree)
		return (NULL);
	hold = tree->right;
	if (hold)
	{
		root_tree = tree->parent;
		if (root_tree)
			root_child = tree->parent->left == tree;

		tree->right = hold->left;
		if (hold->left)
			hold->left->parent = tree;
		tree->parent = hold;

		hold->left = tree;
		hold->parent = root_tree;
		if (root_tree)
		{
			if (root_child)
				root_tree->left = hold;
			else
				root_tree->right = hold;
		}
	}
	while (tree->parent)
		tree = tree->parent;
	return (tree);
}