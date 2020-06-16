#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	count;
	count = 0;

	while (str[count] != '\0')
	{
		if (str[count] < ' ' || str[count] > 126)
		{
			return (0);
		}
		count ++;
	}
	return (1);
}

int	main()
{
	return(0);
}
