#include "binary_trees.h"
/**
 * binary_tree_node - creates a tree node
 * @parent: node parent
 * @value: node value
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	new_node = malloc(sizeof(*parent));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}