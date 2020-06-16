#include<stdio.h>

int	ft_is_lowercase(char *str)
{
	int count;
	count = 0;

	while(str[count] != '\0')
	{
		if (str[count] < 'a' || str[count] > 'z')
		{
			return 0;
		}
		count++;
	}
	return 1;
}

int	main()
{
	char	*str1;
	str1 = "asjhz";

	char	*str2;
	str2 = "Zskjd";

	char	*str3;
	str3 = "adsdz|";

	char	*str4;
	str4 = "WEasdde|";

	printf("%d\n", ft_is_lowercase(str1));
        printf("%d\n", ft_is_lowercase(str2));
        printf("%d\n", ft_is_lowercase(str3));
        printf("%d\n", ft_is_lowercase(str4));
}
