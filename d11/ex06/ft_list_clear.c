/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 18:38:51 by szheng            #+#    #+#             */
/*   Updated: 2018/05/30 19:43:20 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;
	t_list *node;

	node = *begin_list;
	if (!node)
		return ;
	while (node)
	{
		temp = node;
		free(node);
		node = temp->next;
	}
	*begin_list = 0;
}
