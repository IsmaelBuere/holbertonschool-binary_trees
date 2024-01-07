
#include "binary_trees.h"


/**
 * binary_tree_insert_left - inserts node on left branch
 * @parent: parent node
 * @value: value of node
 *
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;
	binary_tree_t *new = binary_tree_node(parent, value);

	if (!new)
		return (NULL);

	if (parent->left)
	{
		temp = parent->left;
		parent->left = new;
		new->left = temp;
		temp->parent = new;
	}
	else
	{
		parent->left = new;
	}
	return (new);
}
