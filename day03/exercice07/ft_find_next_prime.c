#include<stdio.h>
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int to_test;
	int flag = 0;
	
	to_test = nb + 1;

	while (flag == 0)
	{
		if (!((to_test % 2 == 0) || (to_test % 5 == 0)))
		{
			flag = ft_is_prime(to_test);
			if (flag == 1)
			{
				break;
			}
		}

		to_test++;
	}

	return to_test;
		
}

int	ft_is_prime(int nb)
{
	int flag = 1;
	
	for (int i = 2; i <= nb / 2; i++)
	{
		if (nb % i == 0)
		{
			printf("%d     %d \n", nb,  nb % i);
			flag = 0;
			break;
		}
	}
	return flag;
}

int	main()
{
	printf("%d", ft_find_next_prime(9463523));
}
