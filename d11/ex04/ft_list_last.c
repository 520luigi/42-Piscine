/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 18:46:03 by szheng            #+#    #+#             */
/*   Updated: 2018/05/30 21:09:47 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list *temp;

	if (begin_list == 0)
		return (0);
	temp = begin_list;
	while (temp->next)
		temp = temp->next;
	return (temp);
}
