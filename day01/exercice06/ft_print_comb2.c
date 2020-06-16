#include<unistd.h>
#include<stdbool.h>

void	ft_putchar(char a);
void	ft_print_comb2(void);
void	ft_transform_int_to_char(int first, int second);

int	main()
{
	ft_print_comb2();
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_print_comb2(void)
{
	int firstNum = 00;
	int secondNum = 01;

	while (firstNum < 99)
	{
		while (secondNum < 100)
		{
			if (firstNum != secondNum)
			{
				ft_transform_int_to_char(firstNum, secondNum);
				if (!((firstNum == 98) && (secondNum == 99)))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}	
			}
			secondNum++;
		}
	secondNum = 00;
	firstNum++;
	}
	
}

void ft_transform_int_to_char(int first, int second)
{
	char first_a;
	char first_b;
	char second_a;
	char second_b;

	first_b = (first % 10) + 48;
	first = first / 10;
	first_a = (first % 10) + 48;

	second_b = (second % 10) + 48;
	second = second / 10;
	second_a = (second % 10) + 48;

	ft_putchar(first_a);
	ft_putchar(first_b);
	ft_putchar(' ');
	ft_putchar(second_a);
	ft_putchar(second_b);
	
}
