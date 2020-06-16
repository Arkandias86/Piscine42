#include"ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void*))
{
	t_list	*current;
	t_list	*tmp;

	current = *begin_list;
	next_elem = NULL;
	previous = NULL;

	while (current)
	{
		if (cmp(data_ref, current->data) == 0)
		{
			if (previous == NULL)
			{
				*begin_list = current->next;
				free_fct(current->data);
				free(current);
				current = (*begin_list)->next;
			}
			else
			{
				previous->next = current->next;
				free_fct(current->data);
				free(current);
				current = previous->next;
			}	
		}
		else
		{
			previous = current;
			current = current->next;
		}
	}
}	
