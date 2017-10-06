#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t l)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0 || l == 0)
		return ((char *)haystack);
	while (*haystack && l--)
		if (ft_memcmp(haystack++, needle, needle_len) == 0)
			return ((char *)(haystack - 1));
	return (NULL);
}
