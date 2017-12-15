#include "libft.h"

size_t	ft_tablen(int *tab)
{
	size_t	*len;

	len = 0;
	while (tab[len] != NULL)
		len++;
	return (len);
}
