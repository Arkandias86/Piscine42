#include"ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	ft_list	*traceur;

	traceur = begin_list;
	while(traceur->next)
		traceur = traceur->next;

	return (traceur);	
}
