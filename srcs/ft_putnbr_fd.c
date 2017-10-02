#include "libft.h"

/*
** Writes the integer n in the file descriptor fd
** \param n The integer to write
** \param fd The file descriptor where to write
*/
void	ft_putnbr_fd(int n, int fd)
{
	ft_putstr_fd(ft_itoa(n), fd);
}
