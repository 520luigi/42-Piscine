/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 13:11:19 by szheng            #+#    #+#             */
/*   Updated: 2018/05/20 13:11:29 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int rows;
	int cols;

	rows = 1;
	cols = 1;
	while (rows <= y)
	{
		while (cols <= x)
		{
			if ((rows == 1 && cols == 1) || (rows == y && cols == 1))
				ft_putchar('A');
			else if ((rows == 1 && cols == x) || (rows == y && cols == x))
				ft_putchar('C');
			else if ((rows > 1 && rows < y) && (cols > 1 && cols < x))
				ft_putchar(' ');
			else
				ft_putchar('B');
			cols++;
		}
		rows++;
		cols = 1;
		ft_putchar('\n');
	}	
}
