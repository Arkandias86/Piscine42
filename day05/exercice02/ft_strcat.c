#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char *to_return;
	to_return = dest;

	while (*to_return != '\0')
	{
		to_return++;
	}

	while (*src != '\0')
	{
		*to_return = *src;
		to_return++;
		src++;
	}
	*to_return = '\0';
	
	return (dest);
}

int	main()
{
	char	s1[20] = "coucou";
	char	s2[] = "hello";

	printf("%s", ft_strcat(s1, s2));
}	
