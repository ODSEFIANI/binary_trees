#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: a pointer to the sibling node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
    binary_tree_t *grand_father;


	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	parent = node->parent;
    grand_father=node->parent->parent;
	if (grand_father->left == parent)
		return (grand_father->right);
	else
		return (grand_father->left);
}
