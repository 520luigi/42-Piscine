/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 19:47:24 by kachen            #+#    #+#             */
/*   Updated: 2018/06/05 19:47:26 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

t_square	solve(char **str, char empty, int x, int y)
{
	int			*a[2];
	int			i[2];
	t_square	unit;

	unit.size = 0;
	a[0] = (int *)(malloc(sizeof(int) * (x + 1)));
	a[1] = (int *)(malloc(sizeof(int) * (x + 1)));
	i[0] = -1;
	while (++i[0] < y)
	{
		i[1] = -1;
		while (++i[1] < x)
		{
			a[1][i[1]] = replace((str[i[0]][i[1]] == empty), i, a, &unit);
			if (i[1] > 0)
				a[0][i[1] - 1] = a[1][i[1] - 1];
		}
		a[0][i[1] - 1] = a[1][i[1] - 1];
	}
	free(a[0]);
	free(a[1]);
	return (unit);
}

int			replace(int flag, int *i, int *a[2], t_square *unit)
{
	int		res;

	if (i[0] == 0 || i[1] == 0)
		res = (flag) ? 1 : 0;
	else
		res = (flag) ?
			(1 + min(a[1][i[1] - 1], a[0][i[1] - 1], a[0][i[1]])) : 0;
	if (res > unit->size)
	{
		(*unit).x = i[1];
		(*unit).y = i[0];
		(*unit).size = res;
	}
	return (res);
}

int			*dimension(char **str, char a1, char a2)
{
	int		*dim;
	int		i;

	dim = (int *)malloc(sizeof(int) * 2);
	dim[0] = 0;
	dim[1] = 0;
	while (str[dim[1]])
	{
		i = 0;
		while (str[dim[1]][i])
		{
			if (str[dim[1]][i] != a1 && str[dim[1]][i] != a2)
				return (NULL);
			i++;
		}
		if (dim[1] == 0)
			dim[0] = i;
		if (i != dim[0])
			return (NULL);
		dim[1]++;
	}
	return (dim);
}

t_data		first_line(char *str)
{
	t_data	c;
	int		len;

	len = ft_strlen(str);
	c.full = str[len - 1];
	c.block = str[len - 2];
	c.empty = str[len - 3];
	str[len - 3] = '\0';
	c.size = ft_atoi(str);
	return (c);
}

int			map_check(char **str)
{
	t_square	unit;
	t_data		data;
	int			*dim;

	data = first_line(str[0]);
	str++;
	if (!(dim = dimension(str, data.empty, data.block)))
		return (1);
	if (data.size != dim[1])
		return (1);
	unit = solve(str, data.empty, dim[0], dim[1]);
	printer(str, unit, data.full);
	free(dim);
	return (0);
}
