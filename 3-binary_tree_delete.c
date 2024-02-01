#include "binary_trees.h"

/**
 * binary_tree_delete - Delete binary tree.
 * @tree: A pointer to root node of tree that delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
