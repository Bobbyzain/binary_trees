#include "binary_trees.h"
/**
 * binary_tree_size - function that return the size of a tree
 * @tree: tree to check
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	size_t rgt = 0;
	size_t lft = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lft = binary_tree_size(tree->left);
		rgt = binary_tree_size(tree->right);
		size = rgt + lft + 1;
	}
	return (size);
}
