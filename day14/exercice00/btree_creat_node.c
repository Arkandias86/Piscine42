#include"ft_btree.h"

t_btree	*btree_creat_node(void *item)
{
	t_btree	*new_node;

	new_node = (*b_tree)malloc(sizeof(t_btree));
	if (new_node == NULL)
		return (0);
	new_node->item = item;
	new_node->left = 0;
	new_node->right = 0;
	return (new_node);
}	
