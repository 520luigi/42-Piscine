/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 18:29:35 by szheng            #+#    #+#             */
/*   Updated: 2018/05/22 18:57:54 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int index;

	index = 0;
	if (*str == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (!(ft_is_alpha(str[index])))
			return (0);
		index += 1;
	}
	return (1);
}
