/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:24:59 by szheng            #+#    #+#             */
/*   Updated: 2018/05/24 15:54:48 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *nums;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	nums = (int*)malloc(sizeof(*nums) * (max - min));
	while (min < max)
	{
		nums[i] = min;
		min += 1;
		i += 1;
	}
	*range = nums;
	return (i);
}
