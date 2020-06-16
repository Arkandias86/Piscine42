#include"ft_btree.h"

void	b_tree_apply_infix(b_tree *root, void (*applyf)(void *))
{
	if (!root)
		return(0);
	if (root->left)
		b_tree_apply_infix(root->left, applyf);
	if (root)
		 applyf(root->item);
	if (root->right)
		b_tree_apply_infix(root->right, applyf);
}
