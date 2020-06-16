#include<stdio.h>
#include<unistd.h>

int	ft_is_same_carac(char *to_verify, char *base);
void	ft_convert_recur(int nbr, char *base, int size);

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	*to_test_same_carac;
	int	size;
	int	i;
	int	j;

	i = 0;
	j = 0;
	to_test_same_carac = base;
	size = 0;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}

	while (base[size] != '\0')
	{
		if (*base == '-' || *base == '+' || *base < 32 || *base >127)
			return;
		size++;

	}

	if (size < 2)
		return;
	
	if (ft_is_same_carac(to_test_same_carac, base) == -1)
		return;

	ft_convert_recur(nbr, base, size);
}

void	ft_convert_recur(int nbr, char *base, int size)
{
	if (nbr < size)
	{
		ft_putchar(base[nbr]);
		return;
	}
	ft_convert_recur(nbr / size, base, size);
	ft_putchar(base[nbr % size]);
}

int	ft_is_same_carac(char *to_verify, char *base)
{	
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (to_verify[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == to_verify[j])
				return -1;

			j++;
		}
		i++;
	}
	return (0);
}

int	main()
{
	char	str[] = "FUCK";
	int	nbr = 150;
	ft_putnbr_base(nbr, str);
}
