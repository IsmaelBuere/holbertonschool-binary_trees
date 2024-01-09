#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node
 * @node: the node
 *
 * Return: the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandpa;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (!node->parent->parent)
		return (NULL);
	grandpa = node->parent->parent;

	if (node->parent == grandpa->left)
		return (grandpa->right);
	else
		return (grandpa->left);
}
