#include<stdio.h>

char	*ft_strcapitalize2(char	*str)
{
	int	count;
	count = 0;
	
	if (count == 0 && (str[count] >= 'a' && str[count] <= 'z'))
		str[count] -= 32;

	while (str[count] != '0')
	{
		if ((str[count] >= 'a' && str[count] <= 'z') && !(str[count - 1] >= 'a' && str[count - 1] <= 'z')
		&& !(str[count - 1] >= 'A' && str[count - 1] <= 'Z') 
		&& !(str[count - 1] >= '0' && str[count - 1] <= '9'))
			str[count] -= 32;

		else if ((str[count] >= 'A' && str[count] <= 'Z') && (str[count - 1] >= 'a' && str[count - 1] <= 'z')
		&& (str[count - 1] >= 'A' && str[count - 1] <= 'Z') 
		&& (str[count - 1] >= '0' && str[count - 1] <= '9'))
			str[count] += 32;
	
		count ++;
	}
	return (str);
}

int	main()
{
	char	test[] = "eLlo world -tesT11Jdjdh 1jsdj";

	printf("%s", ft_strcapitalize2(test));
}
