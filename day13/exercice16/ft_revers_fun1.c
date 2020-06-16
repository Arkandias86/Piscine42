#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *prev;
	t_list *next;
	t_list *current;

	prev = 0;
	next = 0;
	current = *begin_list;
	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*begin_list = prev;
}

void	ft_list_reverse_fun!(t_list *begin_list)
{
	ft_list_reverse(&begin_list);
}	
