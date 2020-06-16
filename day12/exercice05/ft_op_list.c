#include"header.h"

int	div(int a, int b)
{
	return (a / b);
}

int	mod(int a, int b)
{
	return (a % b);
}

int	mult(int a, int b)
{
	return (a * b);
}

int	add(int a, int b)
{
	return (a + b);
}

int	 sub(int a, int b)
{
	return (a - b);
}

void	process(int a, int b, int (*f)(int, int))
{
	ft_putnbr(f(a, b));
	write(1, "\n", 1);
}
