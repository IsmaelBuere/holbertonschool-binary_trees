#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: Balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_balance, right_balance;

	if (tree == NULL)
		return (0);
	left_balance = binary_tree_height(tree->left);
	right_balance = binary_tree_height(tree->right);

	return (left_balance - right_balance);
}
/**
 * binary_tree_height - Computes the height of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: Height of the binary tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	if (left_heigh > right_height)
	{
		return (left_heigh);
	}
	else
	{
		return (right_height);
	}
}
