#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as
 * the right-child of another node
 * @parent: pointer to parent node
 * @value: input value
 * Return: pointer to the created node, : NULL on failure :
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *btr = NULL;

	if (!parent)
		return (NULL);
	btr = calloc(1, sizeof(binary_tree_t));
	if (!btr)
		return (NULL);
	btr->n = value;
	btr->parent = parent;
	if (parent->right)
	{
		btr->right = parent->right;
		btr->right->parent = btr;
	}
	parent->right = btr;
	return (btr);
}
