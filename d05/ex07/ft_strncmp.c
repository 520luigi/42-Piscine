/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:56:18 by szheng            #+#    #+#             */
/*   Updated: 2018/05/23 15:14:00 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && (index < n))
	{
		if (s1[index] < s2[index])
			return (-1);
		if (s1[index] > s2[index]

			return (1);
		index++;
	}
	return (0);
}
