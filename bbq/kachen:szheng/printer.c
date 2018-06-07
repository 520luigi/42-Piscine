/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:49:34 by kachen            #+#    #+#             */
/*   Updated: 2018/06/06 16:49:35 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	printer(char **str, t_square unit, char x)
{
	int i;
	int j;

	i = unit.y;
	while (i >= 0 && i > unit.y - unit.size)
	{
		j = unit.x;
		while (j >= 0 && j > unit.x - unit.size)
		{
			str[i][j] = x;
			j--;
		}
		i--;
	}
	i = 0;
	while (str[i])
	{
		ft_putstr(str[i]);
		ft_putchar('\n');
		i++;
	}
}
