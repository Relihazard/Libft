#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dest;

	if (len)
	{
		dest = (unsigned char *)b;
		while (len != 0)
		{
			*dest++ = (unsigned char)c;
			len--;
		}
	}
	return (b);
}
