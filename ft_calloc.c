#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ret;
	size_t			i;

	ret = malloc(count * size);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		ret[i] = 0;
		i++;
	}
	return (ret);
}
