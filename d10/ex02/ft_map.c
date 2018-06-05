/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 17:26:12 by szheng            #+#    #+#             */
/*   Updated: 2018/05/28 17:39:20 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f) (int))
{
	int i;
	int *array;

	i = 0;
	array = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i += 1;
	}
	return (array);
}
