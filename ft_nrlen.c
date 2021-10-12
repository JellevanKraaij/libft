#include "libft.h"

long	ft_nrlen(long input)
{
	int	length;

	length = 0;
	if (input == 0)
		return (1);
	if (input < 0)
	{
		length++;
		input *= -1;
	}
	while (input)
	{
		input /= 10;
		length++;
	}
	return (length);
}
