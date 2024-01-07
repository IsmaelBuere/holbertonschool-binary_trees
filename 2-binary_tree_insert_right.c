#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the
 * right-child of another node.
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 *
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (parent->right)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	parent->right = new;

	return (new);
}
