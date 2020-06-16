#include<unistd.h>

void	convert_hex(int num)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[num / 16], 1);
	write(1, &hex[num % 16], 1);
}

void	ft_pustr_with_non_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 0 && *str <= 31) || *str == 127)
		{
			convert_hex(*str);
		}
		else
			write(1, str, 1);
		str++;
	}
}

int	main()
{
	char str[] = "Coucou tu\nvas bien?";

	ft_pustr_with_non_printable(str);	
}
