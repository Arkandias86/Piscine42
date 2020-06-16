#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
int (*cmpf)(void *, void *))
{
	void	*item_found;

	if (root == 0)
		return (0);
	if ((item_found = btree_search_item(root->left, data_ref, cmpf)))
		return (item_found);
	if (!cmpf(root->item, data_ref))
		return (root->item);
	return (btree_search_item(root->right, data_ref, cmpf));
}
