#include "ft_btree.h"

int	cmp(int left, int right)
{
	if (left > right)
		return (left);
	else
		return (right);
}

int	btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	return (1 + cmp(btree_level_count(root->left),
				btree_level_count(root->right)));
}
