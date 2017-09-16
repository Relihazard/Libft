#include "libft.h"

/*
** Free the first element of a list ad all of his successors.
** @param alst Adress of the link to free
** @param del Pointer a function to free the content of the link
*/
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (alst == NULL || *alst == NULL)
		return ;
	ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(alst, del);
}
