#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: Number of nodes with at least 1 child, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes;
	size_t right_nodes;

	if (!tree)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + left_nodes + right_nodes);
	}
	else
	{
		return (left_nodes + right_nodes);
	}
}
