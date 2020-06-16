#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	count;
	count = 0;

	while (str[count] != '\0')
	{
		if ((str[count] < 'a' || str[count] > 'Z') && (str[count] > 'z' || str[count] < 'A' ))
		{
			return 0;
		}
		count++;
	}
	return 1;
}

int	main()
{
	char	*string;
	string = "aWdjsdhzW";

	printf("%d", ft_str_is_alpha(string));
}
