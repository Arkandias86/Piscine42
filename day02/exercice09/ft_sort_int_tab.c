#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	for (int i = 0; i < size-2; i++)
	{
		for (int j = i+ 1; j < size-1; j++)
		{
			int cache;
			if (tab[i] > tab[j])
			{
				cache = tab[i];
				tab[i] = tab[j];
				tab[j] = cache;
			}
		}
	}
}

int 	main()
{
	int numbers[10];

	for (int i = 9; i >= 0; i--)
	{
		numbers[9-i] = i;
	}

	int *pointer;
	pointer = &numbers[0];

	for (int j = 0; j < 10; j++)
        {
                printf("%d ", numbers[j]);
        }

	ft_sort_int_tab(pointer, 10);

	for (int j = 0; j < 10; j++)
	{
		printf("%d ", numbers[j]);
	}
}
