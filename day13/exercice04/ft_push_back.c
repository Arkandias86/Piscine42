#include"ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	**traceur;
	t_list	*new_elem;

	traceur = begin_list;
	new_elem = ft_creat_elem(data);

	while(*traceur)
		*traceur = &(*traceur)->next;

	new_elem->next = *traceur;
	*traceur = new_elem;
}
