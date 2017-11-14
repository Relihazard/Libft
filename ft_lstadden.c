/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadden.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:53:39 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/14 17:53:53 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_list **lst, t_list *new)
{
	t_list	*view;

	view = *lst;
	if (view != NULL)
	{
		while (view->next != NULL)
			view = view->next;
		view->next = new;
	}
	else
		*lst = new;
}
