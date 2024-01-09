#include "binary_trees.h"


#include "11-binary_tree_size.c"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: the tree
 *
 * Return: true if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes;

	if (!tree)
		return (0);

	nodes = binary_tree_size(tree) + 1;

	while (1)
	{
		if (nodes == 1)
			break;
		if (nodes % 2 != 0)
			return (0);
		nodes /= 2;
	}

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (1);
	return (0);


}
