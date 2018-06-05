#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size] != '\0')
	{
		size += 1;
	}
	return (size);
}

int		main(void)
{
	int sizes;

	sizes = ft_strlen( "asfafsf ");
	ft_putchar(sizes + 48);
}