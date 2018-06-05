/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 19:01:42 by szheng            #+#    #+#             */
/*   Updated: 2018/05/22 19:05:54 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int index;

	index = 0;
	if (*str == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (!(ft_is_numeric(str[index])))
			return (0);
		index += 1;
	}
	return (1);
}
