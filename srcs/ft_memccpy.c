#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	while (n--)
	{
		*dest++ = *source++;
		if (*source == (unsigned char)c)
			return (dest);
	}
	return (NULL);
}
