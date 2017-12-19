/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 15:43:47 by agrossma          #+#    #+#             */
/*   Updated: 2017/12/19 19:04:42 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*g_optarg;
int		g_optind = 1;
int		g_optopt;
int		g_opterr = 1;
int		g_optreset;

static void	ft_getopt_argument(char *place)
{
	g_optarg = NULL;
	if (!*place)
		++g_optind;
}

static int	ft_getopt_arg_required(char *place, const char *optstring,
	char *progname)
{
	place = "";
	if (*optstring == ':')
		return ((int)':');
	if (g_opterr)
		(void)ft_printf("%s: option requires an argument -- %c\n",
			progname, g_optopt);
	return ((int)'?');
}

static int	ft_getopt_illegal_opt(char *progname, const char *optstring,
	char *place)
{
	if (g_optopt == (int)'-')
		return (EOF);
	if (!*place)
		g_optind++;
	if (g_opterr && *optstring != ':')
		(void)ft_printf("%s: illegal option -- %c\n", progname, g_optopt);
	return ((int)'?');
}

static int	ft_getopt_eof(int argc, const char **argv, char **place)
{
	g_optreset = 0;
	if (g_optind >= argc || *(place[0] = (char *)argv[g_optind]) != '-')
	{
		place[0] = "";
		return (EOF);
	}
	if (place[0][1] && *++place[0] == '-')
	{
		g_optind++;
		place[0] = "";
		return (EOF);
	}
	return (0);
}

int			ft_getopt(int argc, const char **argv, const char *optstring)
{
	static char	*progname;
	static char	*place = "";
	char		*oli;

	progname = !progname ? (char *)*argv : ++progname;
	if (g_optreset || !*place)
		if (ft_getopt_eof(argc, argv, &place) == EOF)
			return (EOF);
	if ((g_optopt = (int)*place++) == (int)':'
		|| !(oli = ft_strchr(optstring, g_optopt)))
		return (ft_getopt_illegal_opt(progname, optstring, place));
	if (*++oli != ':')
		ft_getopt_argument(place);
	else
	{
		if (*place)
			g_optarg = place;
		else if (argc <= ++g_optind)
			return (ft_getopt_arg_required(place, optstring, progname));
		else
			g_optarg = (char *)argv[g_optind];
		place = "";
		++g_optind;
	}
	return (g_optopt);
}
