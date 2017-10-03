#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	if ((join = (char *)malloc(sizeof(*join) * (ft_strlen(s1) + ft_strlen(s2) + 1))) == NULL)
		return (NULL);
	while (*s1)
		*join++ = *s1++;
	while (*s2)
		*join++ = *s2++;
	*join = '\0';
	return (join);
}
