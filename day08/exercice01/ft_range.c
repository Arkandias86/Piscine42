#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tableau;
	int	range;
	int	i;
	int	j;

	j = 0;
	i = min;
	tableau = NULL;
	if (min >= max)
		return tableau;

	range = max - min;

	tableau = (int*) malloc(sizeof(*tableau) * range);
	while (i < max)
	{
		tableau[j] = i;
		i++;
		j++;
	}

	return (tableau);
}

int	main()
{
	int	*tab;

	tab = ft_range(-10, 10);

	
	printf("%d", tab[19]);
}
