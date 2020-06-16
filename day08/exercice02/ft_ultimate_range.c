#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	len;
	int	i;

	ptr = NULL;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	
	len = max - min;

	if (!(ptr =  malloc(sizeof(int) * len )))
		return (-1);
	
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}

	*range = ptr;

	return (i);
}

int	main()
{
	return(0);
}
