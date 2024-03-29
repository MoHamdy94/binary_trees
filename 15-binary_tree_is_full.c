#include "binary_trees.h"

/**
 * is_full_rec - Checks if binary tree is full recursively.
 * @tree: A pointer to the root node of tree that check.
 *
 * Return: If tree is not full, 0.
 *         Otherwise return, 1.
 */
int is_full_rec(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_rec(tree->left) == 0 ||
		    is_full_rec(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if binary tree full.
 * @tree: A pointer to root node of tree that check.
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwise return - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_rec(tree));
}
