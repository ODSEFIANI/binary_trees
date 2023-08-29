#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - number of level within binary tree
 * @tree: A pointer to the root node of the tree to traverse
 *
 * Return: the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		counter++;
	}
	return (counter);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	size_t a, b;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	a = binary_tree_depth(first);
	b = binary_tree_depth(second);
	if (a > b)
		return (binary_trees_ancestor(first->parent, second));
	else if (a < b)
		return (binary_trees_ancestor(first, second->parent));
	else
		return (binary_trees_ancestor(first->parent, second->parent));
}
