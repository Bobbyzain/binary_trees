#include "binary_trees.h"
/**
 * binary_tree_leaves - function that return the no. of leaves in a tree
 * @tree: tree to check
 * Return: no of leaves in a tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;
	size_t rgt = 0;
	size_t lft = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lft = binary_tree_leaves(tree->left);
		rgt = binary_tree_leaves(tree->right);
		leaves = lft + rgt;
		return ((!lft && !rgt) ? leaves + 1 : leaves + 0);
	}
}
