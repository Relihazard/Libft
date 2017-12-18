/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_padding.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 12:50:02 by agrossma          #+#    #+#             */
/*   Updated: 2017/12/12 14:26:51 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_padding(size_t strlen, size_t padding_width, char padding)
{
	while (strlen < padding_width)
	{
		ft_putchar(padding);
		strlen++;
	}
}
