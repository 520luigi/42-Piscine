#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		total_rows(int size)
{
	int rows;

	rows = (-3 + ((size + 2) * (size + 3))/2);
	return (rows);
}

int		total_cols(int size)
{
	int cols;

	cols = (7 + 2 * (total_rows(size) - 3) + (size - 1) * 4);
	return (cols);

}

void	sastantua(int size)
{
	if (size >= 1)
	{
		int row_ct;
		int col_ct;
		int rows;
		int cols;

		row_ct = 1;
		col_ct = 1;
		rows = total_rows(size);
		cols = total_cols(size);
		while (row_ct <= rows)
		{
			while (col_ct <= cols)
			{
				if (col_ct > ((cols + 1)/2 - row_ct) && col_ct < ((cols + 1)/2 + row_ct)) 
					ft_putchar('*');
				else if (col_ct == ((cols + 1)/2 + row_ct))
					ft_putchar('\\');
				else if (col_ct == ((cols + 1)/2 - row_ct))
					ft_putchar('/');
				else if (col_ct < ((cols + 1)/2 - row_ct))
					ft_putchar(' ');
				col_ct++;
			}
			row_ct++;
			col_ct = 1;
			ft_putchar('\n');
		}
	}
}

int		main(void)
{
	sastantua(10);
	return (0);
}