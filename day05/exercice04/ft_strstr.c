#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;

	if (*to_find == '\0')
		return (str);

	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);

			j++;	
		}
		i++;
	}
	return NULL;
}

int	main()
{
	char	s1[] = "coucou";
	char	s2[] = "test";
	char	s3[] = "uco";

	printf("%s", ft_strstr(s1, s2));
	printf("%s", ft_strstr(s1, s3));
}
