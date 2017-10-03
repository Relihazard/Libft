#include "libft.h"

/*
** Applies the function f to every character of the string s using its index 
** to create a new string resulting in the succesives applications of f.
** \param s The string to iterate on
** \param f The function to apply
** \return The new string created by the applications of f
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (f == NULL)
		return (NULL);
	if ((str = (char *)malloc(sizeof(*str) * ft_strlen(s))) == NULL)
		return (NULL);
	i = 0;
	while (*s)
		*str++ = f(i++, *s++);
	return (str);
}
