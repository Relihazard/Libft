#include "libft.h"

static void	ft_copy_array(int *to_sort, int *work_tab, int begin, int end)
{
	int		i;

	i = begin;
	while (i < end)
	{
		work_tab[i] = to_sort[i];
		i++;
	}
}

static void	ft_merge(int *to_sort, int begin,
					int middle, int end, int *work_tab)
{
	int		i;
	int		j;
	int		k;

	i = begin;
	j = middle;
	k = begin;
	while (k < end)
	{
		if (i < middle && (j >= end || to_sort[i] <= to_sort[j]))
		{
			work_tab[k] = to_sort[i];
			i++;
		}
		else
		{
			work_tab[k] = to_sort[j];
			j++;
		}
		k++;
	}
}

static void	ft_split_merge(int *work_tab, int begin, int end, int *to_sort)
{
	int		middle;

	if (end < (begin / 2))
		return ;
	middle = (end + begin) / 2;
	ft_split_merge(to_sort, begin, middle, work_tab);
	ft_split_merge(to_sort, middle, end, work_tab);
	ft_merge(work_tab, begin, middle, end, to_sort);
}

void		ft_merge_sort(int *to_sort, size_t n)
{
	int		*work_tab;

	work_tab = (int *)ft_memalloc(sizeof(int) * n);
	ft_copy_array(to_sort, work_tab, 0, n);
	ft_split_merge(work_tab, 0, n, to_sort);
	free(work_tab);
}
