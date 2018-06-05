/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 13:10:45 by szheng            #+#    #+#             */
/*   Updated: 2018/05/27 14:38:47 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************* */

#include "header.h"

int		build_board2(int **puzzle, int row, int col, int i)  /* 2nd part of creating board function split in two to prevent norminette error of 25 lines per function */
{
	while (i < 9)
	{
		if (is_possible(puzzle, row, col, i + 1)) /* use is_possible to see if a number can be in this row & col, if can then it will be that number */
		{
			puzzle[row][col] = i + 1;
			if ((col + 1) < 9)
			{
				if (build_board(puzzle, row, col + 1)) /* go to next col, then run recursion again to check ---this is a recursion where the two functions call each other back and forht */
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

int		build_board(int **puzzle, int row, int col) /* use recursion to fill up */
{
	int i;

	if (row < 9 && col < 9)
	{
		if (puzzle[row][col] != 0) /* if a number exist on this specific row and column, skip to next row or column then run this function again. */
		{
			if ((col + 1) < 9)
				return (build_board(puzzle, row, col + 1));
			else if ((row + 1) < 9)
				return (build_board(puzzle, row + 1, 0)); /* resets to new row, starting at col 0, the left most value */
			else
				return (1);
		}
		else /*use build_board2 to determine eligibility */
		{
			i = 0;
			return (build_board2(puzzle, row, col, i));
		}
		return (0);
	}
	else
		return (1);
}

int		**ft_error(void)  /*display error function if any error happens */
{
	write(1, "Error\n", 6);
	return (0);
}

int		**ft_create_puzzle(char **argv) /*this function takes in the input and allocate memory space for the input and create a uniform 2d array that store the information */
{
	int **puzzle;
	int i;
	int j;

	i = 1;
	j = 0;
	puzzle = (int**)malloc(sizeof(int*) * 9); /* allocate space for 9 inputs, rows */
	while (i < 10)
	{
		puzzle[i - 1] = (int*)malloc(sizeof(int) * 9); /* allocate space for 9 columns/ 9 integers for each row starting at line0 to line8 */
		while (j < 9)
		{
			if (argv[i][j] == 0)  /* any number is 0, return error cause sudoku cannot have a number 0, only 1 to 9 */
				return (ft_error());
			if ((argv[i][j] - '0') < 0)  /* this part does check if the element is a less than 0, so a dot, turn it into zero */
				puzzle[i - 1][j] = 0;
			else
				puzzle[i - 1][j] = (argv[i][j] - '0');  /*turn the given character number to int*/
			j++;
		}
		j = 0;
		i++;
	}
	return (puzzle);
}

int		main(int argc, char **argv)  /* minimun argc starts with 1, so we want argc = 10 because we want 9 arguments a */
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

/* test cases I tried and the results were good!!!
"9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......."

"1...7..3." "83.6....." "..29..6.8" "6....49.7" ".9.....5." "3.75....4" "2.3..91.." ".....2.43" ".4..8...9"

last row incomplete gives error
"1...7..3." "83.6....." "..29..6.8" "6....49.7" ".9.....5." "3.75....4" "2.3..91.." ".....2.43" ".4..8"

empty everything works too...
"........." "........." "........." "........." "........." "........." "........." "........." "........."

empty 10 rows give error as expected
"........." "........." "........." "........." "........." "........." "........." "........." "........." "........."

calling function by itself gives error as well... */





