#include<unistd.h>

void	ft_putchar(char c);
void	ft_is_negative(int i);

int	main()
{
	ft_is_negative(-10);
	ft_is_negative(100);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int i)
{
	if (i < 0)
	{
		ft_putchar('N');
	}
	else 
	{
		ft_putchar('P');
	}
}
