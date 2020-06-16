#include<unistd.h>

void	ft_putnbr(int n)
{
	char	c;
	c = n + 48;
	write(1, &c, 1); 
}

void	ft_print_comb2(void)
{
	int	i;
	int	y;
	
	i = 0;
	while (i < 99)
	{
		y = i + 1;
		while (y < 100)
		{
			ft_putnbr(i/10);
			ft_putnbr(i%10);
			write(1, " ", 1);
			ft_putnbr(y/10);
			ft_putnbr(y%10);
			if (i != 98 || y != 99)
			{
				write(1, ", ", 2);
			}	
			y++;
		}
		i++;
	}
}
