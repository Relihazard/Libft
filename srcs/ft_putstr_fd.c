#include "libft.h"

/*
** Writes the string s in the file descriptor fd
** \param s The string to write
** \param fd The file descriptor where to write
*/
void	ft_putstr_fd(char const *s, int fd)
{
	while (*s++)
		ft_putchar_fd(*s, fd);
}
