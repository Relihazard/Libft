/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:51:01 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/08 14:28:05 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Assigns the value '\0' to every character of the string
** \param s The string to clear
*/

void	ft_strclr(char *s)
{
	while (*s)
		*s++ = '\0';
}
