
#include "binary_trees.h"


/**
 * binary_tree_is_root - checks if node is root
 * @node: the node
 * Return: truth value
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);
	else
		return (1);
}
