#include "libft.h"

/*
** Compares lexicographicaly two strings
** \param s1 The first string to compare
** \param s2 The second string to compare
** \return 1 if the two strings are equal, 0 otherwise
*/
int		ft_strequ(char const *s1, char const *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (*s1 && *s2)
	{
		if (*s1++ != *s2++)
			return (0);
	}
	return (1);
}
