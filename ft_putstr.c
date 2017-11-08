/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:51:01 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/08 13:40:10 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prints the string s on the standard output
** \param s The string to print
*/

void	ft_putstr(char const *s)
{
	while (*s)
		ft_putchar(*s++);
}
