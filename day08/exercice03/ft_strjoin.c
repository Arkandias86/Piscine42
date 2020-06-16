#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;

	while (str[i])
		i++;
	
	return (i);
}

int	ft_size_string(char **strs, int size, char *sep)
{
	int	total_size;
	int	i;
	int	j;
	int	sep_size;

	total_size = 0;
	sep_size = ft_strlen(sep);
	j = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			total_size += ft_strlen(&strs[i][j]);
			j++;
		}
		i++;
	}
	return (total_size + sep_size * (size - 1));
}

char	*ft_concat(char **strs, char *sep, int size, char *ptr)
{
	char	*to_return;
	int	i;
	int	j;
	int	k;

	to_return = ptr;
	k = 0;
	j = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			*ptr = strs[i][j];
			ptr++;
			j++;
			
		}

		i++;
		while (sep[k] && i <size)
		{
			*ptr = sep[k];
			ptr++;
			k++;
		}
		k = 0;
	}
	return (to_return);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	len;
	char	*str;

	str = NULL;
	if (size == 0)
		return str;


	len = ft_size_string(strs, size, sep);

	if (!(str = malloc(sizeof (*str) * len + len)))
		return (NULL);

	
	str = ft_concat(strs, sep, size, str);

	return (str);
}

int	main(int argc, char **argv)
{

	char	sep[] = " / ";
	printf("%s", ft_strjoin(argc, argv, sep));



}
