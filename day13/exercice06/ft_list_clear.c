#include<stdio.h>
#include"ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*ft_free)(void *))
{
	t_list	*ptr;

	ptr = NULL;
	while (begin_list)
	{
		ptr = begin_list->next;
		ft_free(begin_list->next);
		free(begin_list);
		begin_list = ptr;
	}
	begin_list = 0;
}
