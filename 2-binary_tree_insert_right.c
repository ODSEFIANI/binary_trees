#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the parent node to insert the left-child in
 * @value: the value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rchild;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	rchild = malloc(sizeof(binary_tree_t));
	if (rchild == NULL)
		return (NULL);
	rchild->parent = parent;
	rchild->n = value;
	rchild->left = NULL;
	rchild->right = NULL;

	if (parent->right == NULL)
		parent->right = rchild;
	else
	{
		temp = parent->right;
		parent->right = rchild;
		rchild->right = temp;
	}
	return (rchild);
}
 
