#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a ptr to the node to find the uncle
 *
 * Return: ptr to the uncle node
 *         NULL if node = NULL
 *         NULL if the parent = NULL
 *         NULL if the node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: ptr to the node to find the sibling
 *
 * Return: ptr to the sibling node
 *         NULL if node = NULL
 *         NULL if the parent = NULL
 *         NULL if the node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
