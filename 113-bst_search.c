#include "binary_trees.h"

/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree: pointer to root node of tree
 * @value: value of the seatch in the tree
 * Return: pointer to the node containing a value equals to value
 * tree if null else nothing found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	while (tree)
	{
		if (value == tree->n)
			return ((bst_t *)tree);
		tree = value < tree->n ? tree->left
							   : tree->right;
	}
	return ((bst_t *)tree);
}