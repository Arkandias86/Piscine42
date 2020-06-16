#include<stdio.h>

int	ft_is_prime(int nb)
{
	if ((nb == 0) || (nb == 1))
	{
		return 0;
	}
	
	int result = 1;
	for (int i = 2; i <= nb / 2; i++)
	{
		if ( nb % i == 0)
		{
			result = 0;
			break;
		}
	}

	return result;
}

int     main()
{
	printf("%d  %d", ft_is_prime(11), ft_is_prime(9463527));
}
