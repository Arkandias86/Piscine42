#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*pt;
	pt = dest;

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return pt;
}

int	main()
{
	char	*src;
	src = "test";

	char	dest[10];

	printf("%s\n", ft_strcpy(dest, src));
//	printf("%s", dest);
}
