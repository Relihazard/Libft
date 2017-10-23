#include "libft.h"

int		ft_atoi(const char *str)
{
	int				result;
	unsigned int	digit;
	int				sign;

	result = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	else
		sign = 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str)
	{
		digit = *str - '0';
		if (digit > 9)
			break;
		result = (10 * result) + digit;
		str++;
	}
	return (result * sign);
}
