#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node
 * @value: input value
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *btn = NULL;

	btn = calloc(1, sizeof(binary_tree_t));
	if (!btn)
		return (NULL);
	btn->parent = parent;
	btn->n = value;
	return (btn);
}