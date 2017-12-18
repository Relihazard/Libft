/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 17:16:05 by agrossma          #+#    #+#             */
/*   Updated: 2017/12/16 17:21:25 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_partition(int *tab, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = tab[high];
	i = low - 1;
	j = low;
	while (j <= high - 1)
	{
		if (tab[j] < pivot)
		{
			i++;
			ft_swap(&tab[i], &tab[j]);
		}
		j++;
	}
	if (tab[high] < tab[i + 1])
		ft_swap(&tab[i + 1], &tab[high]);
	return (i + 1);
}

void		t_quick_sort(int *tab, int low, int high)
{
	int	p;

	if (low < high)
	{
		p = ft_partition(tab, low, high);
		ft_quick_sort(tab, low, p - 1);
		ft_quick_sort(tab, p + 1, high);
	}
}
