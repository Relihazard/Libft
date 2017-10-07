#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;

	copy = (char *)malloc(sizeof(char) * ft_strlen(s1));
	while (*s1)
		*copy++ = *s1++;
	return (copy);
}
