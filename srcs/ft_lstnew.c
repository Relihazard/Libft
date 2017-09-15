#include "libft.h"

/*
** Allocate (with malloc) and returns a new link. The members of the new link
** are initialized by copy of the funtion's parameters.
** @param content The content to add inside the new link
** @param content_size The size of the content to add in the new link
** @return The new link or NULL if the allocation failed
*/
t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_elem;

	if ((new_elem = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	new_elem->content = (void *)content;
	new_elem->content_size = content_size;
	return (new_elem);
}
