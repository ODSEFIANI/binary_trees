#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_depth - number of level within binary tree
* @tree: A pointer to the root node of the tree to traverse
*
* return: none
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t counter = 0;

    if (tree == NULL)
        return 0;
    if (tree->parent == NULL)
        return 0;
    
    while (tree ->parent)
  {
    tree=tree->parent;
    counter++;
  }
    return (counter);
}

