/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 20:00:17 by szheng            #+#    #+#             */
/*   Updated: 2018/05/27 20:44:04 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		sudo_algo(int **puzzle, int row, int col, int i)
{
	while (i < 9)
	{
		if (is_possible(puzzle, row, col, i + 1))
		{
			puzzle[row][col] = i + 1;
			if ((col + 1) < 9)
			{
				if (build_board(puzzle, row, col + 1))
					return (1);
				else
					puzzle[row][col] = 0;
			}
			else if ((row + 1) < 9)
			{
				if (build_board(puzzle, row + 1, 0))
					return (1);
				else
					puzzle[row][col] = 0;
			}
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int		build_board(int **puzzle, int row, int col)
{
	int i;

	if (row < 9 && col < 9)
	{
		if (puzzle[row][col] != 0)
		{
			if ((col + 1) < 9)
				return (build_board(puzzle, row, col + 1));
			else if ((row + 1) < 9)
				return (build_board(puzzle, row + 1, 0));
			else
				return (1);
		}
		else
		{
			i = 0;
			return (sudo_algo(puzzle, row, col, i));
		}
		return (0);
	}
	else
		return (1);
}

int		**ft_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int		**ft_create_puzzle(char **argv)
{
	int **puzzle;
	int i;
	int j;

	i = 1;
	j = 0;
	puzzle = (int**)malloc(sizeof(int*) * 9);
	while (i < 10)
	{
		puzzle[i - 1] = (int*)malloc(sizeof(int) * 9);
		while (j < 9)
		{
			if (argv[i][j] == 0)
				return (ft_error());
			if ((argv[i][j] - '0') < 0)
				puzzle[i - 1][j] = 0;
			else
				puzzle[i - 1][j] = (argv[i][j] - '0');
			j++;
		}
		j = 0;
		i++;
	}
	return (puzzle);
}

int		main(int argc, char **argv)
{
	int **puzzle;

	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	puzzle = ft_create_puzzle(argv);
	if (puzzle == 0)
	{
		return (0);
	}
	if (build_board(puzzle, 0, 0))
		ft_print_board(puzzle);
	else
		write(1, "Error\n", 6);
	return (0);
}
