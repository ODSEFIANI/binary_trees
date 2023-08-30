#include <stdlib.h>
#include "binary_trees.h"

/**
 * max - returns the maximum value
 * @a: first number
 * @b: secon number
 *
 * Return: max
*/
size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (max(l, r) + 1);
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: A pointer to the root node of the
* Return: If tree is NULL, return 0,
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;
	int l;
	int r;

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	balance = l - r;
	return (balance);
}
