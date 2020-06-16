#include<stdio.h>

char	*ft_strlowcase(char *str)
{	
	int	count;
	count = 0;

	while (str[count] != '\0')
	{
		if (str[count] > 64 && str[count] < 91)
		{
			str[count] += 32;
		}
		count++;
	}
	return (str);
}

int	main()
{
	char	test[] = "HELLO World!";

	printf("%s", ft_strlowcase(test));
}
