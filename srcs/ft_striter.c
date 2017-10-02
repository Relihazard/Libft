#include "libft.h"

/*
** Applies the function f to every character of the string s.
** Every character is passed by adress to the function f so that it could be`
** modified is necessary.
** \param s The string to iterate on
** \param f The function to calls on every character of s
*/
void	ft_striter(char *s, void (*f)(char *))
{
	if (f == NULL)
		return;
	while (*s++)
		f(s);
}
