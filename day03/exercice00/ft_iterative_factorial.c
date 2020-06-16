#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	long result = 1;
	int max = 2147483647;

	if (nb < 0)
	{
		return(0);
	}

	if (nb == 0)
	{
		return(0);
	}

	for (int i = 1; i <= nb; i++)
	{
		result *= i;
		
		if (result > max)
		{
			return(0);
		}
	}
	return (int)result;
}

int	main()
{
	printf("%d", ft_iterative_factorial(8));
}
