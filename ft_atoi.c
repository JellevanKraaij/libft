#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	ret;

	if (!str)
		return (0);
	ret = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		ret = (ret * 10) + (*str - '0');
		str++;
	}
	ret *= sign;
	return (ret);
}
