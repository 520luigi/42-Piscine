/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 14:33:49 by szheng            #+#    #+#             */
/*   Updated: 2018/05/28 13:05:18 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0')
	{
		if (*s2 == '*')
			return (match(s1, s2 + 1));
		else
			return (0);
	}
	if (*s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	if (*s1 != *s2)
		return (0);
	return (0);
}

int		main()
{
	int res;

	res = match("whatisthis", "w***s");
	printf("%d", res);
	return (0);
}
