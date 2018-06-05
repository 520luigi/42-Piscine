/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 14:53:34 by szheng            #+#    #+#             */
/*   Updated: 2018/05/20 23:10:00 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		total_rows(int size)
{
	int rows;

	rows = (-3 + ((size + 2) * (size + 3)) / 2);
	return (rows);
}

int		total_cols(int size)
{
	int cols;

	cols = (7 + 2 * (total_rows(size) - 3) + (size - 1) * 4);
	return (cols);
}

void	print_pyra(int cols, int rows, int col_ct, int row_ct)
{
	int mdpt;

	mdpt = (cols + 1) / 2;
	while (row_ct <= rows)
	{
		while (col_ct <= cols)
		{
			if (col_ct > (mdpt - row_ct) && col_ct < (mdpt + row_ct))
				ft_putchar('*');
			else if (col_ct == (mdpt + row_ct))
				ft_putchar('\\');
			else if (col_ct == (mdpt - row_ct))
				ft_putchar('/');
			else if (col_ct < (mdpt - row_ct))
				ft_putchar(' ');
			col_ct++;
		}
		row_ct++;
		col_ct = 1;
		ft_putchar('\n');
	}
}

void	sastantua(int size)
{
	int jump_ct;
	int row_ct;
	int col_ct;
	int rows;
	int cols;

	row_ct = 1;
	col_ct = 1;
	rows = total_rows(size);
	cols = total_cols(size);
	print_pyra(cols, rows, col_ct, row_ct);
}
