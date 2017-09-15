#include "libft.h"

/*
** Add a new element at the head of the list
** @param alst Adress of the first link of the list
** @param new The link to add at the head of the list
*/
void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst != NULL && new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}
