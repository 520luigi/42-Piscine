/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:54:36 by kachen            #+#    #+#             */
/*   Updated: 2018/06/06 21:17:30 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H
# define BUF_SIZE 4096
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct		s_data
{
	unsigned char	empty;
	unsigned char	block;
	unsigned char	full;
	int				size;
}					t_data;

typedef struct		s_square
{
	int				x;
	int				y;
	int				size;
}					t_square;

t_square			solve(char **str, char empty, int x, int y);
t_data				first_line(char *str);
int					replace(int flag, int *i, int *a[2], t_square *unit);
int					*dimension(char **str, char a1, char a2);
int					map_check(char **str);
void				printer(char **str, t_square unit, char x);
int					ft_strlen(char *str);
char				*ft_strcat(char *dest, char *src);
char				*ft_strcpy(char *dest, char *src);
int					ft_strcmp(char *s1, char *s2);
char				*ft_strdup(char *src);
void				ft_putchar(char c);
void				ft_putstr(char *str);
int					ft_atoi(char *str);
int					min(int a, int b, int c);
char				**allocation(char *str);
char				**fill(char **table, char *str);
char				**alloc_setup1(char **table, char *str);
char				**alloc_setup2(char **table, char *str);

#endif
