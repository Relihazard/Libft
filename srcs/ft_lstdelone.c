#include "libft.h"

/*
** Free the content and the memory of a link from a list
** @param alst Adress of the link to free
** @param del Pointer a function to free the content of the link
*/
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst == NULL || *alst == NULL)
		return ;
	(*del)((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
