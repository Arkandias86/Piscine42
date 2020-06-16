#include<stdio.h>

int	ft_strlen(char *str)
{
	int count;
	count = 0;
	
	while (*str != '\0')
		{
			count++;
			str++;
		}

	return (count);
}

int	main()
{	
	char	s[] = "12345";
	printf("%d", ft_strlen(s));
}
