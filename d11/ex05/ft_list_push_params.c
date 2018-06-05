/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 19:11:24 by szheng            #+#    #+#             */
/*   Updated: 2018/05/30 21:41:13 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int			i;
	t_list		*node;
	t_list		*temp;

	i = 0;
	node = 0;
	while (i < ac)
	{
		temp = ft_create_elem(av[i]);
		if (temp == 0)
			return (node);
		temp->next = node;
		node = temp;
		i++;
	}
	return (node);
}
