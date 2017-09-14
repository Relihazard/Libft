#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;

	if (dest && source)
	{
		dest = (unsigned char *)dst;
		source = (const unsigned char *)src;
		while (n != 0)
		{
			*dest++ = *source++;
			if (*source == (unsigned char)c)
				return (dest + 1);
			n--;
		}
	}
	return (NULL);
}
