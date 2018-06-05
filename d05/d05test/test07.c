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

char	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int index;

	index = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && (index < n))
	{
		if (s1[index] < s2[index])
			return (-1);
		if (s1[index] > s2[index])
			return (1);
		index++;
	}
	return (0);
}

int		main(void)
{
	char str1[] = "ABC";
	char str2[] = "ABCDEF";
	unsigned int p = 2;

	char example = ft_strncmp(str1, str2, p);
	printf("%d", example);
	return (0);
}