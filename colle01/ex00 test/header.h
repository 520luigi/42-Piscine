#ifndef HEADER_H /*a big if statement that explains if what follow is defined, then we don't execute it. norminette says that it is not double defined*/
#define HEADER_H
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_print_board(int **puzzle);

int		is_possible(int **puzzle, int row, int col, int num);

int		build_board(int **puzzle, int row, int col);

#endif