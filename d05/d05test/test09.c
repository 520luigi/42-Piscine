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

char	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			(str[index]) += 32;
		index += 1;
	}
	return (str);
}

int		main(void)
{
	char str[] = "AbC DFMO LkoP0231=";

	char *example;
	example = ft_strlowcase(str);
	printf("%s", example);
	return (0);
}