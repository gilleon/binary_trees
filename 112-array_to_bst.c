#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array
 * @size: number of element in array
 * Return: pointer to the root node of
 * the created BST, else NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *root = NULL;

	if (!array)
		return (NULL);
	while (i < size)
	{
		bst_insert(&root, array[i]);
		i++;
	}
	return (root);
}
