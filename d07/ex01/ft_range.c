/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:24:48 by szheng            #+#    #+#             */
/*   Updated: 2018/05/24 15:21:32 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *nums;

	i = 0;
	if (min >= max)
		return (NULL);
	nums = (int*)malloc(sizeof(*nums) * (max - min));
	while (min < max)
	{
		nums[i] = min;
		min += 1;
		i += 1;
	}
	return (nums);
}
