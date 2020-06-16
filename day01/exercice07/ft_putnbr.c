#include<unistd.h>
#include<stdbool.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putnbr_rec(int nb);

int	main()
{
	ft_putnbr(42);
	ft_putchar('\n');	
	ft_putnbr(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
	}
	else
	{
		ft_putnbr_rec(nb);
	}
}

void	ft_putnbr_rec(int nb)
{
	if (nb < 0)
	{
		nb = nb + 2 * (-nb);
		ft_putchar('-');
		ft_putnbr_rec(nb);
	}
	else if (nb > 0)
	{	 
		char a = nb % 10 + 48;
		int i = nb / 10;
		ft_putnbr_rec(i);
		ft_putchar(a);
	}
}
