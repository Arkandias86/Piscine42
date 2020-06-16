#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *source, unsigned int size)
{
	unsigned int	count;
	unsigned int	len;
	
	len = 0;
	count = 0;

	while (source[count] != '\0' && count < size)
	{
		dest[count] = source[count];
		count++;
	}
	dest[count] = '\0';
	
	while (source[len])
	{
		len++;
	}
	
	return (len);
}

int	main()
{
	char	dst[20];
	char	src[] = "coucou";
	char 	src1[] = "coucou je suis une chaine trop longue pour le buffer!";

	printf("%d\n", ft_strlcpy(dst, src, 20));
	printf("%d", ft_strlcpy(dst, src1, 20));
}
