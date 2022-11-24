#include "binary_trees.h"

/**
 * @brief
 * 
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		NewNode->right = parent->right;	
		parent->right->parent = NewNode;
	}
	parent->right = NewNode;

	return (NewNode);
}
