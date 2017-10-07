#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (source < dest)
	{
		dest += len;
		source += len;
		while (len--)
		{
			*--dest = *--source;
		}
	}
	else
		while (len--)
			*dest++ = *source++;
	return (dest);
}
