#include<unistd.h>

void    ft_putnbr(int n)
{
        int     i;
        char    a;
        if (n < 0)
        {
                write(1, "-", 1);
                n *= -1;
        }

        if (n < 10)
        {
                a = n + 48;
                write(1, &a, 1);
                return;
        }

        else
        {
                i = n % 10;
                a = i + 48;

                ft_putnbr(n / 10);
                write(1, &a, 1);
        }
}
