/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 14:41:57 by agrossma          #+#    #+#             */
/*   Updated: 2017/12/18 16:56:20 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static ssize_t	ft_parse_format(char **format, va_list *ap, t_format *fmt)
{
	ssize_t	format_len;
	t_conv	conv;

	if ((*(++*format)) == '\0')
		return (0);
	if ((ft_parse_flags(format, fmt)) == NULL)
		return (-1);
	if ((ft_parse_width(format, fmt, ap)) == NULL)
		return (-1);
	if ((ft_parse_precision(format, ap, fmt)) == NULL)
		return (-1);
	if ((ft_parse_length(format, fmt)) == NULL)
		return (-1);
	if (**format == '\0')
		return (0);
	if (ft_conv_tab(**format) == NULL)
		conv = ft_conv_null;
	else
		conv = ft_conv_tab(**format);
	format_len = conv(format, ap, fmt);
	(*format)++;
	return (format_len);
}

static int		ft_printf_rec(const char *format, va_list *ap, size_t nbr_chr)
{
	char		*next_arg;
	t_format	fmt;
	ssize_t		format_len;

	next_arg = ft_strchr(format, '%');
	if (*format == '\0')
		return (nbr_chr);
	if (next_arg == NULL)
	{
		ft_putstr(format);
		return (nbr_chr + ft_strlen(format));
	}
	else if (next_arg > format)
	{
		write(1, format, next_arg - format);
		return (ft_printf_rec(next_arg, ap, nbr_chr + (next_arg - format)));
	}
	else
	{
		ft_bzero(&fmt, sizeof(t_format));
		if ((format_len = ft_parse_format((char **)&format, ap, &fmt)) == -1)
			return (-1);
		else
			return (ft_printf_rec(format, ap, nbr_chr + format_len));
	}
}

int				ft_printf(const char *format, ...)
{
	va_list	ap;
	int		ret;

	va_start(ap, format);
	ret = ft_printf_rec(format, &ap, 0);
	va_end(ap);
	return (ret);
}
