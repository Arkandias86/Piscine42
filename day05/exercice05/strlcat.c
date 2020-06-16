#include<stdio.h>

unsigned int	ft_strlcat(char *dest, char *source, unsigned int size)
{
	unsigned int	count;
	count = 0;

	while (*dest != '\0')
	{
		dest++;
		count++;
	}

	while (*source != '\0' && count < size-1)
	{
		*dest = *source;
		dest++;
		source++;
		count++;
	}
	*dest = '\0';

	return (count);;
}

int	main()
{
	char	s1[20] = "12345";
	char	s2[] = "67890";

	printf("%d\n", ft_strlcat(s1, s2, 7));
	printf("%s\n", s1);
}
