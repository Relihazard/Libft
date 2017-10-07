#include "libft.h"

/*
** Take the adress of a pointer which the memory is freed (with free) and
** puts the pointer to NULL
** \param ap The adress of the pointer
*/
void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
