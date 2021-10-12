#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*ret;
	int		i;
	int		negative;

	i = ft_nrlen(n);
	ret = malloc(i + 1);
	if (ret == NULL)
		return (NULL);
	negative = (n < 0);
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strcpy(ret, "-2147483648"));
		n *= -1;
		ret[0] = '-';
	}
	ret[i--] = 0;
	while (i >= negative)
	{
		ret[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (ret);
}
