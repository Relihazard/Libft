#include "libft.h"

static int	ft_partition(int *tab, int low, int high)
{
	int		pivot;
	int		i;
	int		j;

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

void		ft_quick_sort(int *tab, int low, int high)
{
	int		p;

	if (low < high)
	{
		p = ft_partition(tab, low, hi);
		ft_quick_sort(tab, low, p - 1);
		ft_quick_sort(tab, p + 1, high);
	}
}
