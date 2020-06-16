#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int result = nb;

	if (power < 0)
	{
		return 0;
	}
	
	if (power == 0)
	{
		return 1;
	}

	if (power == 1)
	{
		return result;
	}

	for (int i = 1; i < power; i++)
	{
		result *= nb;
	}

	return result;
}

int	main()
{
	printf("%d", ft_iterative_power(3, 6));
}
