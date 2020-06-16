#include<stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*tabptr;
	int	i;

	i = 0;
	tabptr = (int) malloc(sizeof(int) * length);
	while (i < length)
	{
		tabptr[i] = f(tab[i];
		i++;
	}
	return tabptr;
}
