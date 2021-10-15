#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ret;
	int		i;
	int		negative;
	long	num;

	num = n;
	i = ft_nrlen(num);
	ret = malloc(i + 1);
	if (ret == NULL)
		return (NULL);
	negative = (num < 0);
	if (num < 0)
	{
		num *= -1;
		ret[0] = '-';
	}
	ret[i] = 0;
	i--;
	while (i >= negative)
	{
		ret[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}
	return (ret);
}
