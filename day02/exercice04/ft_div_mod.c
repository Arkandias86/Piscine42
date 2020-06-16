#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int result_div = a / b;
	int result_rest = a % b;

	*div = result_div;
	*mod = result_rest;
}

int	main()
{
	int i = 123;
	int j = 10;

	int y;
	int z;

	ft_div_mod(i, j, &y, &z);
	printf("%d   %d  %d  %d", i, j, y, z);
}
