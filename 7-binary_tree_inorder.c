#include "binary_trees.h"

/**
 * @brief 
 * 
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree);
	binary_tree_inorder(tree->right, func);
}
