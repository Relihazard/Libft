/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:51:01 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/10 17:27:45 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s1);
	copy = (char *)malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	copy = (char *)ft_memcpy(copy, s1, len);
	copy[len] = '\0';
	return (copy);
}
