#include "libft.h"

/*
** Iterate through the list and applies the function f to each link.
** It creates a new list (with malloc) resulting in the succesives applications.
** If an allocation fails, the fuction returns NULL.
** @param lst Pointer to the first link of the list
** @param f Adress of a function to apply to each link
** @return The new list or NULL if an allocation fails
*/
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{

	t_list	*result;
	t_list	*tmp;
	t_list	*tmp2;

	if (lst == NULL || f == NULL)
		return (NULL);
	tmp2 = f(lst);
	if ((result = ft_lstnew(tmp2->content, tmp2->content_size)))
	{
		tmp = result;
		lst = lst->next;
		while (lst)
		{
			tmp2 = f(lst);
			if (!(tmp->next = ft_lstnew(tmp2->content, tmp2->content_size)))
				return (NULL);
			tmp = tmp->next;
			lst = lst->next;
		}
	}
	return (result);
}
