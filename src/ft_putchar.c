#include "libft.h"

/*
** Prints the character c to the standard output.
** \param c The character to print
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
