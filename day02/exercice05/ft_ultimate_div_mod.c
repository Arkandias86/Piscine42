#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int divi = *a / *b;
	int mod = *a % *b;

	*a = divi;
	*b = mod;
}

int	main()
{
	int a = 42;
	int b = 10;

	ft_ultimate_div_mod(&a, &b);

	printf("a =  %d, b = %d", a, b);
}
