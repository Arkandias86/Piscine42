#include<stdio.h>

int	ft_fibonacci(int nb)
{
	if (nb < 0)
	{
		return -1;
	}
	if (nb == 0)
	{
		return 0;
	}
	if (nb == 1)
	{
		return 1;
	}
	
	return (ft_fibonacci(nb-1) + ft_fibonacci(nb-2));
}

int	main()
{
	printf("%d", ft_fibonacci(5));
}
