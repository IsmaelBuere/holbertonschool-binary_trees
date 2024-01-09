
#include "binary_trees.h"


/**
 * binary_tree_is_full - checks if tree is full
 * @tree: the tree
 *
 * Return: true if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
		return (1);
	else
		return (0);
}
