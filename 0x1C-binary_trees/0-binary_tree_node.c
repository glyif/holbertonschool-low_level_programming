#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent of the created binary tree
 * @value: value of the node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	if (parent == NULL)
	{
		new_node->parent = NULL;
		return (new_node);
	}

	new_node->parent = parent;
	new_node->left = new_node->right = NULL;
	new_node->n = value;

	return (new_node);

}
