#include<stdlib.h>
#include"ft_list.h"

t_list	*ft_creat_elem(void *data)
{
	t_list	*elem;

	elem = NULL;
	if ((elem = malloc(sizeof(t_list))))
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}
