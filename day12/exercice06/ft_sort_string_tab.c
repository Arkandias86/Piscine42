#include<stdio.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
	{
		i++;
	}
	return str1[i] - str2[i]; // negative if str1 is smaller
}

void	ft_swap_pointers(void **p1, void **p2)
{
	char	*temp;
	
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	y;

	i = 0;
	while (tab[i])
	{
		y = i + 1;
		while (tab[y])
		{
			if (ft_strcmp(tab[i], tab[y]) > 0)
			{
				ft_swap_pointers((void**)&tab[i], (void**)&tab[y]); 
			}
			y++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	(void)argc;


	ft_sort_string_tab(argv);
	i = 0;
	while(argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	
}
