#include<stdio.h>

char	*ft_strncpy(char *dest, char *source, unsigned int n)
{
	char	*to_return;
	to_return = dest;
	unsigned int	count;
	count = 0;
	
	while (count < n && *source != '\0')
	{
		*dest = *source;
		dest ++;
		source ++;
		count ++;
	}
	*dest = '\0';
	return to_return;
}

int	main()
{
	char	*source;
	source = "Coucou toi!";

	char	destination[20];

	unsigned int	n;
	n = 5;

	printf("%s", ft_strncpy(destination, source, n));
}
