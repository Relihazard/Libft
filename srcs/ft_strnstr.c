#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0 || len == 0)
		return ((char *)haystack);
	while (*haystack)
		if (ft_memcmp(haystack++, needle, len) == 0)
			return ((char *)(haystack - 1));
	return (NULL);
}

int		main(void)
{
	printf("%s", ft_strnstr("Foo Bar Baz", "Bar", 27));
	return (0);
}
