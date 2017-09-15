#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t l)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0 || l == 0)
		return ((char *)hay);
	while (*hay && l--)
		if (ft_memcmp(hay++, needle, needle_len) == 0)
			return ((char *)(hay - 1));
	return (NULL);
}
