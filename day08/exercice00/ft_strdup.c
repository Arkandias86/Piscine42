#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}

	return (i);
}

char	*ft_strdup(char *str)
{
	char	*new_str;
	int	len;
	int	i;

	len = ft_strlen(str); 
	new_str = (char*) malloc (sizeof(*str) * (len + 1));

	if (new_str == NULL)
		return (NULL);
	
	i = 0;
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}

	new_str[i] = '\0';

	return (new_str);
}

int	main()
{
	char	source[] = "Hello world";

	char	*result = ft_strdup(source);

	printf("%s", result);
}
