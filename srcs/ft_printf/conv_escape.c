/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_escape.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 14:37:00 by agrossma          #+#    #+#             */
/*   Updated: 2017/12/12 17:25:29 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_conv_escape(char **format, va_list *ap, t_format *fmt)
{
	(void)format;
	(void)ap;
	if (fmt->has_field_width && !fmt->right_padding)
		ft_print_padding(1, fmt->field_width, fmt->zero_padding ? '0' : ' ');
	ft_putchar('%');
	if (fmt->has_field_width && fmt->right_padding)
		ft_print_padding(1, fmt->field_width, ' ');
	return (fmt->has_field_width ? FT_MAX(fmt->field_width, 1) : 1);
}
