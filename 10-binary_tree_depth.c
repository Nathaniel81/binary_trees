#include "binary_trees.h"

/**
 * @brief 
 * 
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree->parent == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
