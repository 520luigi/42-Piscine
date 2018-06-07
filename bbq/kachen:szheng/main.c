/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 19:47:24 by kachen            #+#    #+#             */
/*   Updated: 2018/06/05 19:47:26 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	*read_map(int fd)
{
	long	len;
	char	buf[BUF_SIZE + 1];
	int		ret;
	char	*res;
	char	*temp;

	len = 0;
	if (fd == -1)
		return ("You mess up something here");
	res = malloc(2);
	res[0] = '\0';
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		temp = ft_strdup(res);
		free(res);
		len += ret;
		res = (char*)malloc(sizeof(char) * (len + 1));
		*res = '\0';
		buf[ret] = '\0';
		ft_strcat(res, temp);
		ft_strcat(res, buf);
		free(temp);
	}
	close(fd);
	return (res);
}

char	***setup(int argc, char **argv, char ***str_p)
{
	int		fd;
	int		i;
	char	*temp;

	if (argc == 1)
	{
		temp = read_map(0);
		str_p[0] = allocation(temp);
		if (temp)
			free(temp);
		str_p[1] = NULL;
	}
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		temp = read_map(fd);
		str_p[i - 1] = allocation(temp);
		str_p[i] = NULL;
		i++;
	}
	return (str_p);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	***str_p;

	str_p = (char***)malloc(sizeof(char*) * (argc + 1));
	setup(argc, argv, str_p);
	i = 0;
	while (str_p[i])
	{
		if (map_check(str_p[i]))
			ft_putstr("map error\n");
		j = 0;
		while (str_p[i][j])
		{
			free(str_p[i][j]);
			j++;
		}
		free(str_p[i][j]);
		i++;
		if (argc > 2 && str_p[i])
			ft_putchar('\n');
	}
	free(str_p);
	return (0);
}
