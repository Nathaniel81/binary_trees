#include "binary_trees.h"

/**
 * @brief 
 * 
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodeCounter;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
	    nodeCounter++;
	nodeCounter += binaary_tree_nodes(tree->left) + binaary_tree_nodes(tree->right);

	return (nodeCounter);
}
