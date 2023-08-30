#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: a pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *left;

	if (!tree)
		return (NULL);
	if (tree->left == NULL)
		return (tree);

	left = tree->left;
	tree->left = left->right;
	if (left->right)
		left->right->parent = tree;
	left->right = tree;
	left->parent = tree->parent;
	tree->parent = left;
	return (left);
}
