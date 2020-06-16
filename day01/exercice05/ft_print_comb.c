#include<unistd.h>
#include<stdbool.h>
void	ft_print_comb(void);
void	ft_putchar(char c);
void	ft_print_comb_putchar(char a, char b, char c, bool last);

int	main()
{
	ft_print_comb();
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char a = '0';
	char b;
	char c;
	bool last = false;
	
	while (a < '8')
	{
		b = a + 1;
			while (b < '9')
			{
				c = b + 1;
					while (c <= '9')
					{
						last = (a == '7' && b == '8' && c == '9');
						ft_print_comb_putchar(a, b, c, last);
						c++;
					} 
				b++;
			}
		a++;
	}
}

void	ft_print_comb_putchar(char a, char b, char c, bool last)
{	
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);

	if (!last)
	{	
		ft_putchar(',');
		ft_putchar(' ');
	}
}	
