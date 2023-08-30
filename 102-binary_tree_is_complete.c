#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);
	return (l + r + 1);
}

/**
 * is_complete_func - function to check if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * @index: index of the node
 * @size: size of the tree
 *
 * Return: 1 if complete, 0 if not
*/
int is_complete_func(const binary_tree_t *tree, size_t index, size_t size)
{
	int l, r;

	if (!tree)
		return (1);
	if (index >= size)
		return (0);
	l = is_complete_func(tree->left, index * 2 + 1, size);
	r = is_complete_func(tree->right, index * 2 + 2, size);
	return (l * r);
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if complete, 0 if not
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_complete_func(tree, 0, binary_tree_size(tree)));
}
