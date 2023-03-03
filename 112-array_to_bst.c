#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: Value to store in the node to be inserted
 * Return: pointer to the created node, or NULL on failure
 * if tree is NULL, the created node must become the root node.
 * If the value is already present in the tree is ignored
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
