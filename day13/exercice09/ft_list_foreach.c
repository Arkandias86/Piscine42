#include"ft_list.h"

void	ft_list_foreach(t_list **begin_list, void (*f)(void *))
{
	t_list	tracer;

	tracer = *begin_list;
	while (tracer)
	{
		f(tracer->data);
		tracer = tracer->next;
	}
}
