/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 13:41:45 by szheng            #+#    #+#             */
/*   Updated: 2018/05/20 13:41:48 by szheng           ###   ########.fr       */
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
			if ((rows == 1 && cols == 1) || (rows == y && cols == x) || (rows == 1 &&  cols == x) || (rows == y && cols == 1))
				ft_putchar('o');
			else if ((rows == 1 || rows == y) && (cols > 1 && cols < x))
				ft_putchar('-');
			else if ((rows > 1 && rows < y) && (cols > 1 && cols < x))
				ft_putchar(' ');
			else
				ft_putchar('|');
			cols++;
		}
		rows++;
		cols = 1;
		ft_putchar('\n');
	}	
}