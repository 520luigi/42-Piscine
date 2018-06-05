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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	to_find_size;

	i = 0;
	j = 0;
	to_find_size = 0;
	while (to_find[to_find_size] != '\0')
		to_find_size++;
	if (to_find_size == 0)
			return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j])
		{
			if (j == to_find_size - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}


int		main(void)
{
	char str[] = "ABCDEFGHIJ";
	char to_find[] = "ABC";

	ft_strstr(str, to_find);

}