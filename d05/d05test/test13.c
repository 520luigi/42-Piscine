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
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int index;

	index = 0;
	if (*str == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (!(ft_is_lowercase(str[index])))
			return (0);
		index += 1;
	}
	return (1);
}

int		main(void)
{
	char str[] = "sfs";

	int example;
	example = ft_str_is_lowercase(str);
	printf("%d", example);
	return (0);
}