#include<stdio.h>

int	ft_is_numeric(char *str)
{
	int	count;
	count = 0;

	while (str[count] != '\0')
	{
		if (str[count] < '0' || str[count] > '9')
		{
			return 0;
		}
		count++;;
	}
	return 1;
}

int	main()
{
	char	*str1;
	str1 = "1290";

	char	*str2;
	str2 = "as12";

	char	*str3;
	str3 = "!#123";

	char	*str4;
	str4 = "!123a";

	printf("%d", ft_is_numeric(str1));
	printf("%d", ft_is_numeric(str2));
	printf("%d", ft_is_numeric(str3));
	printf("%d", ft_is_numeric(str4));
}
