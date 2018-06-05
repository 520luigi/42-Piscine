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

int		ft_is_alphanumeric(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int		ft_is_upperalpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		ft_is_loweralpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 1;
	if (ft_is_loweralpha(str[0]))
		(str[0]) -= 32;
	while (str[index] != '\0')
	{
		if (!(ft_is_alphanumeric(str[index - 1])) && ft_is_loweralpha(str[index]))
			(str[index]) -= 32;
		if (ft_is_alphanumeric(str[index - 1]) && ft_is_upperalpha(str[index]))
			(str[index]) += 32;
		index++;
	}
	return (str);		
}



int		main(void)
{
	char str[] = "z-jaM>si Qi0 pPPp03+q";

	char *example;
	example = ft_strcapitalize(str);
	printf("%s", example);
	return (0);
}