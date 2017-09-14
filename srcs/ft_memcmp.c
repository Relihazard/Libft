#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_copy;
	const unsigned char *s2_copy;

	s1_copy = (const unsigned char *)s1;
	s2_copy = (const unsigned char *)s2;
	while (n--)
	{
		if (*s1_copy != *s2_copy)
			return (*s1_copy - *s2_copy);
		s1_copy++;
		s2_copy++;
	}
	return (0);
}
