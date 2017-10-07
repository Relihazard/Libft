#include "libft.h"

/*
** Allocate (with malloc) and returns a new string ended with a '\0'.
** Every character of the string is initialized to '\0'
** \param size The size of the string
** \return The allocated string or NULL if the allocations failed
*/
char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(sizeof(char) * (size + 1)));
}
