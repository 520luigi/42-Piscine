/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 21:32:42 by szheng            #+#    #+#             */
/*   Updated: 2018/06/03 14:12:18 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		++count;
	return (count);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

int		do_op(int nb1, int nb2, char operator)
{
	if (operator == '+')
		return (nb1 + nb2);
	else if (operator == '-')
		return (nb1 - nb2);
	else if (operator == '/')
		return (nb1 / nb2);
	else if (operator == '*')
		return (nb1 * nb2);
	else if (operator == '%')
		return (nb1 % nb2);
	return (0);
}
