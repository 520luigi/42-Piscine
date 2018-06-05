/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 20:42:27 by szheng            #+#    #+#             */
/*   Updated: 2018/06/03 14:12:37 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putnbr(int nbr);
int		do_op(int nb1, int nb2, char op);
int		parse_parenthesis(char **str);
int		multiplicate_expression(char **str);
int		solve_string(char **str);
char	*remove_spaces(char *str);
int		eval_expr(char *str);

#endif
