/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:51:02 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/07 17:44:57 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocate (with malloc) and returns a copy of the passed string without the
** whitespaces at the beginning and the end. Whitespaces are the characters
** ' ', '\n' and '\t'. If s doesn't contain any whitespaces, it returns a copy
** of s.
** \param s The string to trim
** \return The trimmed string or NULL if the allocation failed
*/
