#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	while (len-- && *src)
		*dst++ = *src++;
	while (len--)
		*dst++ = '\0';
	return (dst);
}
