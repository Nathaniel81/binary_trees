#include "binary_trees.h"

/**
 * @brief 
 * 
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		NewNode->left = parent->left;
		parent->left->parent = NewNode;
	}
	parent->left = NewNode;

	return (NewNode);
}
