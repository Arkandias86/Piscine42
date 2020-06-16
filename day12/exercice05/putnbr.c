#include"unistd.h"

void	ft_print_digit(int i)
{
	i += 48;
	write(1, &i, 1);
}

void	ft_putnbr(int i)
{
	if (i <= -2147483648)
	{
		write(1, "-2147483648", 11);
	}

	if (i < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-i);
	}
	if (i < 10)
	{
		ft_print_digit(i);
	}
	else
	{
		ft_putnbr(i / 10);
		ft_print_digit(i % 10);
	}
}
