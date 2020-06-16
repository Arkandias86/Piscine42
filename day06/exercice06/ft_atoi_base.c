#include<stdio.h>
#include<unistd.h>

int     ft_is_same_carac(char *to_verify, char *base);
int	ft_convert_recur(int nbr, char *base, int size, int result);
int	ft_atoi(char *str);
int	ft_putnbr_base(int nbr, char *base);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	atoi_str;

	atoi_str = ft_atoi(str);

	return (ft_putnbr_base(atoi_str, base)); 
}

int     ft_atoi(char *str)
{
        int n = 1;
        int to_return;

        to_return = 0;

        while (*str == ' ' || *str == '\f' || *str == '\n'
                || *str == '\r' || *str == '\t' || *str == '\v')
                str++;

        while (*str == '-' || *str == '+')
        {
                if (*str == '-')
                        n *= -1;

                str++;
        }

        while (*str >= '0' && *str <= '9')
        {
                to_return = (to_return * 10) + (*str - 48);
                str++;
        }
        return (to_return * n);
}

int    ft_putnbr_base(int nbr, char *base)
{
        char    *to_test_same_carac;
        int     size;
        int     i;
        int     j;
	int	result;

	result = 0;
        i = 0;
        j = 0;
        to_test_same_carac = base;
        size = 0;
		
        if (nbr < 0)
        {
                write(1, "-", 1);
                nbr = -nbr;
        }

        while (base[size] != '\0')
        {
                if (*base == '-' || *base == '+' || *base < 32 || *base >127)
                        return -1;
                size++;
        }

        if (size < 2)
                return -1;

        if (ft_is_same_carac(to_test_same_carac, base) == -1)
                return -1;

	return ft_convert_recur(nbr, base, size, result);

}

int    ft_convert_recur(int nbr, char *base, int size, int result)
{	
        if (nbr < size)
        {
                return base[nbr]-48;
        }

        return (ft_convert_recur(nbr / size, base, size, result) * 10 + (base[nbr % size]-48));
}

int     ft_is_same_carac(char *to_verify, char *base)
{
        int     i;
        int     j;

        i = 0;
        j = 0;
        while (to_verify[i] != '\0')
        {
                j = i + 1;
                while (base[j] != '\0')
                {
                        if (base[i] == to_verify[j])
                                return -1;

                        j++;
                }
                i++;
        }
        return (0);
}

int	main()
{
	char	nbr[] = "   --++--1000ads!100";
	char	str[] = "01";

	printf("%d", ft_atoi_base(nbr, str));
}
