/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:28:27 by szheng            #+#    #+#             */
/*   Updated: 2018/05/25 14:35:09 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int i;
	int j;

	i = 1;
	j = tab[0];
	while (i < length)
	{
		if (j < tab[i])
		{
			j = tab[i];
		}
		i += 1;
	}
	return (j);
}
