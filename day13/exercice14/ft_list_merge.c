#include"ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*tracer;

	tracer = *begin_list1;
	while(tracer->next != NULL)
	{
		tracer = tracer->next;
	}
	if (tracer == NULL)
		*begin_list1 = begin_list2;
	else (begin_list2)
		tracer->next = begin_list2;
}
