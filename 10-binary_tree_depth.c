#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: input binary tree
 * Return: tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		i++;
		tree = tree->parent;
	}
	return (i);
}
