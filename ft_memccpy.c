#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n--)
	{
		*dest++ = *source++;
		if (*source == (unsigned char)c)
			return (dest);
	}
	return (NULL);
}
