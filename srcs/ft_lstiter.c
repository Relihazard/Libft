#include "libft.h"

/*
** Iterate through the list and applies the function f to each link
** \param lst Pointer to the first link of the list
** \param f Adress of a function to apply to each link
*/
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst)
	{
		(*f)(lst);
		lst = lst->next;
	}
}
