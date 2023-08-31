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

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to lowest common ancestor node of the two given nodes
 * else null
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *a = (binary_tree_t *)first, *b = (binary_tree_t *)second;
	size_t ancesor_a, ancesor_b;

	if (!first || !second)
		return (NULL);

	ancesor_a = binary_tree_depth(a);
	ancesor_b = binary_tree_depth(b);
	for (; ancesor_b > ancesor_a; ancesor_b--)
		b = b->parent;
	for (; ancesor_a > ancesor_b; ancesor_b--)
		a = a->parent;
	while (a && b)
	{
		if (a == b)
			return (a);
		a = a->parent;
		b = b->parent;
	}
	return (NULL);
}