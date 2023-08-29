#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: a node to be checked
 *
 * Return: pointer to the new node, or NULL on failure
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
