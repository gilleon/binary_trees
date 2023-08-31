#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to parent node
 * @value: input value
 * Return: pointer to the created node : NULL on failure : parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *btl = NULL;

	if (!parent)
		return (NULL);
	btl = calloc(1, sizeof(binary_tree_t));
	if (!btl)
		return (NULL);
	btl->n = value;
	btl->parent = parent;
	if (parent->left)
	{
		btl->left = parent->left;
		btl->left->parent = btl;
	}
	parent->left = btl;
	return (btl);
}