/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 19:56:45 by szheng            #+#    #+#             */
/*   Updated: 2018/05/27 19:57:49 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_print_board(int **puzzle);

int		is_possible(int **puzzle, int row, int col, int num);

int		build_board(int **puzzle, int row, int col);

#endif
