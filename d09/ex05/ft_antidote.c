/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:18:02 by szheng            #+#    #+#             */
/*   Updated: 2018/05/25 10:24:37 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i > j && i < k) || (i < j && i > k))
		return (i);
	else if ((j > i && j < k) || (j < i && j > k))
		return (j);
	else if ((k > i && k < j) || (k < i && k > j))
		return (k);
	else
		return ;
}
