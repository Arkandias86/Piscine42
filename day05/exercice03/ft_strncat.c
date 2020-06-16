#include<stdio.h>

char	*ft_strncat(char *dest, char *source, unsigned int n)
{
	char	*ptr;

	ptr = dest;

	while (*ptr != '\0')
		ptr++;

	while (n > 0 && *source != '\0')
	{
		*ptr = *source;
		n--;
		ptr++;
		source++;
	}

	*ptr = '\0';

	return (dest);
}

int	main()
{
	char	s1[20] = "coucou";
	char	s2[] = "bibibi";

	printf("%s", ft_strncat(s1, s2, 3));
}
