#include<stdio.h>
#include<stdbool.h>
#include<unistd.h>

const int N = 8;
const int M = 8;
bool	ft_recursive_queens(int board[][8], int col, int *ptr);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_eight_queens_puzzle()
{
	int board[N][M] = 
	{
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0}
	};
	
	int a = 0;
	ft_recursive_queens(board, 0, &a);
	return a;
}

int	ft_isSafe(int board[N][M], int row, int col)
{
	int j;
	int i;
	for (i = 0; i < col; i++) // checking for a queen on the row of the position to test to the left
	{
		if (board[row][i] == 1) //if a queen is on the same row return 0;
		{
			return 0;
		}
	}
	for (i = row, j = col; i >= 0 && j >= 0; i--, j --) //checking the diagonal up left to find a queen
	{
		if (board[i][j] == 1) //if a queen is here, return 0;
		{
			return 0;
		}
	}
	for (i = row, j = col; i < 8 && j >= 0; i++, j--) //checking the diagonal down left
	{
		if (board[i][j] == 1) //if a queen is here, return 0;
		{
			return 0;
		}
	}
	return 1; // if here it is because no queen was on the paths checked, so it's safe
}

bool	 ft_recursive_queens(int board[N][N], int col, int *ptr) 
{ 
    /* base case: If all queens are placed 
    then return true */
    if (col == N) 
    { 
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (board[i][j] == 1)
			{
				ft_putchar(j + 48);
			}
		}
	}

	ft_putchar('\n');
	*ptr = *ptr + 1; 
        return true; 
    } 
  
    /* Consider this column and try placing 
    this queen in all rows one by one */
    bool res = false; 
    for (int i = 0; i < N; i++) 
    { 
        /* Check if queen can be placed on 
        board[i][col] */
        if ( ft_isSafe(board, i, col) ) 
        { 
            /* Place this queen in board[i][col] */
            board[i][col] = 1; 
  
            // Make result true if any placement 
            // is possible 
            res = ft_recursive_queens(board, col + 1, ptr) || res; 
  
            /* If placing queen in board[i][col] 
            doesn't lead to a solution, then 
            remove queen from board[i][col] */
            board[i][col] = 0; // BACKTRACK 
        } 
    } 
  
    /* If queen can not be place in any row in 
        this column col then return false */
    return res; 
} 

int	main()
{
	printf("%d", ft_eight_queens_puzzle());
}
