#include "libft.h"

/*
** Writes the string s to the file descriptor fd followed by a '\n'
** \param s The string you want to write
** \param fd The file descriptor where to write
*/
void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
