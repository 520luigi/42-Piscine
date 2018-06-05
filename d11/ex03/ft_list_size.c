/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 18:26:17 by szheng            #+#    #+#             */
/*   Updated: 2018/05/29 20:18:33 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*temp;

	temp = begin_list;
	count = 0;
	while (temp)
	{
		temp = temp->next;
		count += 1;
	}
	return (count);
}
