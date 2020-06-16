#include<stdio.h>

int	ft_atoi(char *str)
{
	int n = 1;
	int to_return;

	to_return = 0;

	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n *= -1;

		str++;
	}

	while (*str >= '0' && *str <= '9')
	{
		to_return = (to_return * 10) + (*str - 48);
		str++;
	}
	return (to_return * n);
}

int	main()
{
	char	str[] = "  \n  \t ---++--+--1234567890dsd3434  ";
	printf("%d", ft_atoi(str));
}
