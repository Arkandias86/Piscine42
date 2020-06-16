#include"header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	char	operator;

	int i = ft_strlen(argv[2]);
	if (i != 1)
	{
		ft_putnbr(0);
		write(1, "\n", 1);
		return (0);
	}
	operator = argv[2][0];

	if (argc != 4)
		return (0);
	if (operator  == '-' || operator  == '+' || operator  == '*' || operator  == '/' || operator == '%')
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);

		if (operator == '-')
			process(a, b, &sub);
		else if (operator == '+')
			process(a, b, &add);
		else if (operator  == '*')
			process(a, b, &mult);
		else if (operator  == '/')
		{
			if (b == 0)
				write(2, "Stop : division by zero", 23);
			else
				process(a, b, &div);
		}
		else if (operator == '%')
		{
			if (b == 0)
				write(2, "Stop : modulo by zero", 21);
			else
				process(a, b, &mod);
		}
	}
	return (0);
}
