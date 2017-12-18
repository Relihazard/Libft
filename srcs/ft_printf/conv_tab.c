/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 19:09:55 by agrossma          #+#    #+#             */
/*   Updated: 2017/12/18 15:51:11 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_setup_tab(t_conv *tab)
{
	tab['%'] = &ft_conv_escape;
	tab['s'] = &ft_conv_string;
	tab['S'] = &ft_conv_wstring;
	tab['p'] = &ft_conv_pointer;
	tab['d'] = &ft_conv_int;
	tab['D'] = &ft_conv_long;
	tab['i'] = &ft_conv_int;
	tab['o'] = &ft_conv_octal;
	tab['O'] = &ft_conv_long;
	tab['u'] = &ft_conv_unsigned;
	tab['U'] = &ft_conv_long;
	tab['x'] = &ft_conv_hex;
	tab['X'] = &ft_conv_hex;
	tab['c'] = &ft_conv_char;
	tab['C'] = &ft_conv_wchar;
}

t_conv		ft_conv_tab(char c)
{
	static t_conv	*tab;

	if (tab == NULL)
		tab = (t_conv *)ft_memalloc(sizeof(t_conv) * 126);
	ft_setup_tab(tab);
	return (tab[(int)c]);
}
