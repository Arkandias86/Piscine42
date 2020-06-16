#include<stdio.h>
#include<stdbool.h>

int	ft_strlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}

int	main()
{
	char string[15];
	char *first_pointer;

	string[0] = 'H';
	string[1] = 'e';
	string[2] = 'l';
	string[3] = 'l';
	string[4] = 'o';
	string[5] = ' ';
	string[6] = 'W';
	string[7] = 'o';
	string[8] = 'r';
	string[9] = 'l';
	string[10] = 'd';
	string[11] = ' ';
	string[12] = '4';
	string[13] = '2';
	string[14] = '\0';

	first_pointer = &string[0];
	
	int a = ft_strlen(first_pointer);
	
	printf("%d", a);
}
