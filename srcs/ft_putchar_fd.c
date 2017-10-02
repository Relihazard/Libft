#include "libft.h"

/*
** Writes the character c into the file descriptor fd
** \param c The character to write
** \param fd The file descriptor where to write
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
