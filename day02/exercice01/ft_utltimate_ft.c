#include<stdio.h>

void	ft_ultimate_ft(int *********ptr)
{
	*********ptr = 42;
}

int	main()
{
	int a = 1;

	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;

	ptr1 = &a;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8; 

	printf("%d", a);
	ft_ultimate_ft(ptr9);
	printf("%c", '\n');
	printf("%d", a);
}
