#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node as a left-child of
 *                           of another node in binary tree.
 * @parent: A pointer to node to insert left-child.
 * @value: Value to store in new node.
 *
 * Return: If parent is NULL or error occur - NULL.
 *         Otherwise - pointer to new node.
 *
 * Description: If parent has left-child, the new node
 *              take its place and old left-child is set as
 *              left-child of new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
