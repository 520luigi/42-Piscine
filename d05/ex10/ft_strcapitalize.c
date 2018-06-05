/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:47:58 by szheng            #+#    #+#             */
/*   Updated: 2018/05/22 16:57:55 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanumeric(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||
	(c >= 'a' && c <= 'z'))
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
		if (!(ft_is_alphanumeric(str[index - 1])) &&
	ft_is_loweralpha(str[index]))
			(str[index]) -= 32;
		if (ft_is_alphanumeric(str[index - 1]) &&
	ft_is_upperalpha(str[index]))
			(str[index]) += 32;
		index++;
	}
	return (str);
}
