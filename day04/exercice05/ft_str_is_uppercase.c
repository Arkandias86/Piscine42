#include<stdio.h>

int	ft_is_uppercase(char *str)
{
	int	count;
	count = 0;

	while (str[count] != '\0')
	{
		if (str[count] < 'A' || str[count] > 'Z')
		{
			return 0;
		}
		count ++;
	}
	return 1;
}

int	main()
{
	char *str1;
	str1 = "AWUUZ";

        char *str2;
        str2 = "12AWUUZ";

        char *str3;
        str3 = "AWUUZas";

        char *str4;
        str4 = "12AWUUZas";

	printf("%d\n", ft_is_uppercase(str1));
        printf("%d\n", ft_is_uppercase(str2));
        printf("%d\n", ft_is_uppercase(str3));
        printf("%d\n", ft_is_uppercase(str4));
}
