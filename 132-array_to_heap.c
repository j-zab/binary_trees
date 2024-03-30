#include "binary_trees.h"

/**
 * array_to_heap - creates a Max Binary Heap tree from an array
 * @array: a ptr to the 1st element of the array to be converted
 * @size: the # of element in the array
 *
 * Return: a ptr to the root node of the created Binary Heap
 *         NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
