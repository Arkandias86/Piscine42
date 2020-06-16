#include<stdio.h>
#include<stdbool.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int index_tab = 0;
	int index_pointer = size - 1;
	int cache;
	int *start;
	start = tab;
	int *end;
	end = tab;
	int i = 0;
	
	while (i < size-1)
	{
		end++;
		i++;
	}

	while(index_tab < index_pointer)
	{
		cache = *start;
		*start = *end;
		*end = cache;
		start++;
		end--;
		index_tab++;
		index_pointer--;
	}
}

int		main(void)
{
	int	string[15];
	int	*first_pointer;
	int		length;

	string[0] = 1;
	string[1] = 2;
	string[2] = 3;
	string[3] = 4;
	string[4] = 5;
	string[5] = 6;
	string[6] = 7;
	string[7] = 8;
	string[8] = 9;
	string[9] = 10;
	string[10] = 11;
	string[11] = 12;
	string[12] = 13;
	string[13] = 14;
	string[14] = 15;
	first_pointer = &string[0];
	length = 15;

	ft_rev_int_tab(first_pointer, length);
	int i;
	for (i = 0; i < 15; i++)
	{
		printf("%d", string[i]);
	} 
}
