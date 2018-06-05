/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 10:42:38 by szheng            #+#    #+#             */
/*   Updated: 2018/05/21 11:23:10 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int index;
	int is_neg;
	int number;

	index = 0;
	is_neg = 0;
	number = 0;

	if (str[index] == '-')
		is_neg = 1;
	if ((str[index] == '-' || str[index] == '+'))
		index++;
	while ((str[index] >= '0') && (str[index] <= '9'))
	{
		number *= 10;
		number += (str[index] - '0');
		index++;
	}

	if (is_neg == 1)
		return (-number);
	else
		return (number);
}

int		main(void)
{
	char str[] = "sdfsf433";
	int res = ft_atoi(str);
	printf("%d", res);
}