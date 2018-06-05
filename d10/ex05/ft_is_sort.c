/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 20:20:12 by szheng            #+#    #+#             */
/*   Updated: 2018/05/28 20:52:26 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			i += 1;
		else
			i = length + 1;
	}
	if (i == length - 1)
		return (1);
	while (j < length - 1)
	{
		if (f(tab[j], tab[j + 1]) <= 0)
			j += 1;
		else
			j = length + 1;
	}
	if (j == length - 1)
		return (1);
	return (0);
}
