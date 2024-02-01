#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: pointer to the node to insert the right-child in
* @value: value to store in the new node
*
* Return: Pointer to the newly created node
*         NULL on failure
*         NULL if parent is NULL
*/


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->right = parent->right;
	if (new_node->right != NULL)
	{
		new_node->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
