#include"ft_list.h"

void	ft_swap(t_list **elem1, t_list **elem2)
{
	void	*tmp;

	tmp = (*elem1)->data;
	(*elem1)->data = (*elem2)->data;
	(*elem2)->data = tmp;
}

void ft_list_sort(t_list **begin_list, int(*cmp)())
{
	int	marker;
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = NULL;
	tmp2 = NULL;
	marker = 1;

	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return;
	while(1)
	{
		i = 0;
		tmp1 = *begin_list;
		tmp2 = (*begin_list)->next;
		while(tmp2)
		{
			if(cmp(tmp1->data, tmp2->data > 0))
			{
				ft_swap(&tmp1, &tmp2);
				i = 1;
			}
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}
	}
}
