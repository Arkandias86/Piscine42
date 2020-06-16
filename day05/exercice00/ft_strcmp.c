#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s2 != '\0')
	{
		if (*s1 == '\0')
		return (-1);
		
		s1++;
		s2++;
	}
	
	if  (*s1 == *s2)
		return (0);

	else
		return 1;
}

int	main()
{
	char	s[] = "coucou";
	char	s1[] = "hello";
	char	s2[] = "ucouco";

	printf("%d\n", ft_strcmp(s1, s));
	printf("%d\n", ft_strcmp(s2, s));
	printf("%d\n", ft_strcmp(s, s1));

}
