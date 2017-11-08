/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:51:00 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/08 13:38:37 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
