#include"ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
	t_list	*tracer;

	tracer = begin_list;
	while (tracer)
	{
		if (cmp(data_ref, tracer->data) == 0)
			f(tracer->data);
		tracer = tracer->next;
	}
}
