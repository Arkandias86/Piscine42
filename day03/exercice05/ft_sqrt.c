#include<stdio.h>

int	ft_sqrt(int nb)
{
	float sqrt;
	float temp;

	sqrt = nb / 2;
	temp = 0;

	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (nb / temp + temp) / 2;
	}
	int to_return = sqrt;
	if ((sqrt - to_return) == 0)
	{
		return to_return;
	}

	return 0;
}

int	main()
{
	printf("%d  %d", ft_sqrt(9), ft_sqrt(10));
}
