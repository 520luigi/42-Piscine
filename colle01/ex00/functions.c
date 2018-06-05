/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 19:50:34 by szheng            #+#    #+#             */
/*   Updated: 2018/05/27 20:43:24 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
}

void	ft_print_board(int **puzzle)
{
	int row;
	int col;

	row = 0;
	col = 0;
	while (row < 9)
	{
		while (col < 8)
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

int		is_possible(int **puzzle, int row, int col, int num)
{
	int row_st;
	int col_st;
	int index;

	row_st = (row / 3) * 3;
	col_st = (col / 3) * 3;
	index = 0;
	while (index < 9)
	{
		if (puzzle[row][index] == num)
			return (0);
		if (puzzle[index][col] == num)
			return (0);
		if (puzzle[row_st + (index / 3)][col_st + (index % 3)] == num)
			return (0);
		index += 1;
	}
	return (1);
}
