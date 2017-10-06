#include "libft.h"

/* TODO: Create documentation */
char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (*haystack)
		if (ft_memcmp(haystack++, needle, needle_len) == 0)
			return ((char *)(haystack - 1));
	return (NULL);
}
