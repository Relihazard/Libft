/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:58:14 by agrossma          #+#    #+#             */
/*   Updated: 2018/03/20 19:23:01 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		read_from_fd_into_stock(int const fd, char **stock)
{
	static char	buff[BUFF_SIZE + 1] = { '\n' };
	int			read_bytes;
	char		*nstr;

	read_bytes = read(fd, buff, BUFF_SIZE);
	if (read_bytes > 0)
	{
		buff[read_bytes] = '\0';
		nstr = ft_strjoin(*stock, buff);
		if (!nstr)
			return (-1);
		ft_strdel(stock);
		*stock = nstr;
	}
	return (read_bytes);
}

int				get_next_line(const int fd, char **line)
{
	static char	*stock = NULL;
	char		*endl_index;
	int			ret;

	GNL_CHECK(stock);
	endl_index = ft_strchr(stock, '\n');
	while (endl_index == NULL)
	{
		if ((ret = read_from_fd_into_stock(fd, &stock)) < 0)
			return (-1);
		if (ret == 0)
		{
			if ((endl_index = ft_strchr(stock, '\0')) == stock)
				return (0);
		}
		else
			endl_index = ft_strchr(stock, '\n');
	}
	*line = ft_strsub(stock, 0, endl_index - stock);
	if (!*line)
		return (-1);
	endl_index = ft_strdup(endl_index + 1);
	ft_strdel(&stock);
	stock = endl_index;
	return (1);
}
