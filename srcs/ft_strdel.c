#include "libft.h"

/*
** Takes the adress of a string and free the memory and puts the pointer to NULL
** \param as The adress of the string
*/
void	ft_strdel(char **as)
{
	ft_memdel((void *)as);
}
