#include <unistd.h>
void ft_putchar(char c);

int main()
{
	ft_putchar('A');	
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
