#include"ft_btree.h"

void	b_tree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return(0);
	if (root->left)
		b_tree_apply_suffix(root->left, applyf);
	if (root->right)
		b_tree_apply_suffix(root->righ, applyf);
	applyf(root->item);t
}
