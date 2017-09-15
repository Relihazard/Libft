#include "libft.h"

/*
** Allocate (with malloc) and return a new memory area (initialized with 0s)
** @param size The size of the memory area to allocate
** @return The memory area or NULL if fail
*/
void	*ft_memalloc(size_t size)
{
	void	*area;

	if ((area = malloc(size)) == NULL)
		return (NULL);
	ft_bzero(area, size);
	return (area);
}
