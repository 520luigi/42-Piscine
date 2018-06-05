/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:26:34 by szheng            #+#    #+#             */
/*   Updated: 2018/05/22 20:17:39 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int index;
	int is_neg;
	int number;

	index = 0;
	is_neg = 0;
	number = 0;
	while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n'
	|| str[index] == '\v' || str[index] == '\f' || str[index] == '\r')
		index += 1;
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
