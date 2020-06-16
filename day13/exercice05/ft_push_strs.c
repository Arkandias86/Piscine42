#include"ft_list.h"


t_list	*ft_push_strs(int size, char **strs)
{
	t_list *head = malloc(sizeof(t_list));
	int	i;

	i = 0;
	head = NULL;
	while (i < size)
	{
		ft_list_push_front(&head, str[i]);
		i++;
	}
	return (head);
}
