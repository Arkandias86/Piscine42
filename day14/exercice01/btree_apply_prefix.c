#include"ft_btree.h"

void	b_tree_apply_prefix(b_tree *root, void(*applyf)(void *))
{
	if (root == 0)
		return;
	applyf(root->item);
	if (root->left != 0)
		b_tree_apply_prefix(root->left, applyf);
	
	if (root->right!= 0)
		b_tree_apply_prefix(root->right, applyf);
}
