#include<unistd.h>

void	ft_print_str(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
	{
		i++;
	}
	return str2[i] - str1[i];
}

void	ft_print_params(int nbr, char *param[])
{
	int	i;
	
	i = 0;
	while (i < nbr)
	{
		ft_print_str(param[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	*temp;
	;
	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	
	ft_print_params(argc, argv);
	return (0);
}
