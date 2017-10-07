#include "libft.h"

/*
** Prints the string s on the standard output
** \param s The string to print
*/
void	ft_putstr(char const *s)
{
	while (*s)
		ft_putchar(*s++);
}
