#include"ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tracer;
	
	tracer = begin_list;
	while(tracer)
	{
		if (cmp(tracer->date, data_ref) == 0)
			return tracer;
		tracer = tracer->next;
	}
	return (tracer);	
}
