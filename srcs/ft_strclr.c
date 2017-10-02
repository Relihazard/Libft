#include "libft.h"

/*
** Assigns the value '\0' to every character of the string
** \param s The string to clear
*/
void	ft_strclr(char *s)
{
	while (*s)
		*s++ = '\0';
}
