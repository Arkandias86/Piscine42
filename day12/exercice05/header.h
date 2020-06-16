#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

int	ft_atoi(char *str);
void	ft_putnbr(int a);
void	process(int a, int b, int (*f)(int, int));
int	sub(int a, int b);
int	add(int a, int b);
int	mult(int a, int b);
int	div(int a, int b);
int	mod(int a, int b);
int	ft_strlen(char *str);
#endif
