/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 13:36:12 by szheng            #+#    #+#             */
/*   Updated: 2018/05/27 14:38:32 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

void	ft_putchar(char c)  
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb) /* this is print number using recursion and putchar, we make the number by 1 digit using /10 and print the number that last number using % */
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_print_board(int **puzzle) /* this function prints the puzzle after taking in the puzzle array taken from create puzzle function, it's called in the main */
{
	int row;
	int col;

	row = 0;
	col = 0;
	while (row < 9)
	{
		while (col < 8)   /*the col is less than 8 b/c we want to print the last row outside this loop without an extra space as shown in example document*/
		{
			ft_putnbr((puzzle[row][col]));
			ft_putchar(' ');
			col += 1;
		}
		ft_putnbr(puzzle[row][col]);
		ft_putchar('\n');
		col = 0;
		row += 1;
	}
}

int		is_possible(int **puzzle, int row, int col, int num)  /* this checks if a number is possible to be a specific number by checking if any numbers in its rows, columns and square contain the exact number*/
{
	int row_st;
	int col_st;
	int index;

	row_st = (row / 3) * 3;  /* based on the row given, find the row to start for its square */
	col_st = (col / 3) * 3;  /* based on the column its given, find the column to start for its square... use the drawing i did in notebook to explain this */
	index = 0;
	while (index < 9)
	{
		if (puzzle[row][index] == num)
			return (0);
		if (puzzle[index][col] == num)
			return (0);
		if (puzzle[row_st + (index / 3)][col_st + (index % 3)] == num) /* go from beginning of square (there are 9 of them from top left corner to its bottom right corner) --explain with picture */
			return (0);
		index += 1;
	}
	return (1); /* if no number is found, then it returns 1 which is true that the number is possible to exist at its current location cause no number is the same in its row, column, and square */
}
