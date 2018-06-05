/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:09:31 by szheng            #+#    #+#             */
/*   Updated: 2018/05/17 21:54:11 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb(void)
{
	int digit[3];

	digit[0] = '0';
	while (digit[0] <= '9')
	{
		digit[1] = digit[0] + 1;
		while (digit[1] <= '9')
		{
			digit[2] = digit[1] + 1;
			while (digit[2] <= '9')
			{
				ft_putchar(digit[0]);
				ft_putchar(digit[1]);
				ft_putchar(digit[2]);
				if (!(digit[0] == '7' && digit[1] == '8' && digit[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				digit[2]++;
			}
			digit[1]++;
		}
		digit[0]++;
	}
}
