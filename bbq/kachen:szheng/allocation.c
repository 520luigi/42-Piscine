/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:15:26 by kachen            #+#    #+#             */
/*   Updated: 2018/06/06 16:15:27 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	**alloc_setup1(char **table, char *str)
{
	int		i;
	int		word_cnt;

	i = 0;
	word_cnt = 0;
	while (str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == '\n')
		{
			word_cnt++;
			while (str[i] == '\n')
				i++;
		}
	}
	if ((str[i - 1]) != '\n')
		word_cnt++;
	table = (char**)malloc(sizeof(*table) * (word_cnt + 10));
	table[word_cnt] = 0;
	return (table);
}

char	**alloc_setup2(char **table, char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		i++;
		if ((str[i]) == '\n' || !str[i])
		{
			table[j] = (char*)malloc(sizeof(**table) * (k + 10));
			j++;
			k = 0;
			while (str[i] == '\n')
				i++;
		}
		k++;
	}
	return (table);
}

char	**fill(char **table, char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		table[j][k] = str[i];
		i++;
		k++;
		if ((str[i]) == '\n' || !str[i])
		{
			table[j][k] = '\0';
			j++;
			k = 0;
			while (str[i] == '\n')
				i++;
		}
	}
	return (table);
}

char	**allocation(char *str)
{
	char	**table;

	table = 0;
	table = alloc_setup1(table, str);
	table = alloc_setup2(table, str);
	table = fill(table, str);
	return (table);
}
