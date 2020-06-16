#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int swap_a = *a;
	int swap_b = *b;

	*b = swap_a;
	*a = swap_b;
}

int	main()
{
	int a;
	int b;

	a = 1;
	b = 42;

        printf("before: %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("before: %d %d\n", a, b);
}
