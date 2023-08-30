#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the size
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter = 0;
	size_t l, r;

	if (tree == NULL)
		return (0);

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	if(tree->left == NULL && tree->right == NULL)
		counter++;
	return (counter +l + r);
}
