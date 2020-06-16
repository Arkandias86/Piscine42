#include"ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*traceur;
	unsigned int	i;

	traceur = begin_list;
	i = 0;
	while (i < nbr)
	{
		if (traceur)
		{	
			traceur = traceur->next;
			i++;
		}
		else
			traceur = NULL;
	}	
	return (traceur)
}
