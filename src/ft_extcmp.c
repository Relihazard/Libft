/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 16:57:16 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/23 17:00:40 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_extension(const char *path, const char *ext)
{
	size_t	nl;
	size_t	el;
	
	nl = ft_strlen(path);
	el = ft_strlen(ext);
	return (nl >= el && !ft_strcmp(path + nl - el, ext));
}
