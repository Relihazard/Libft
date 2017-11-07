/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:51:00 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/07 16:51:21 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prints the string s on the standard output followed by a '\n'
** \param s The string to print
*/
void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
