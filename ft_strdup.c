#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src);
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, src, len + 1);
	return (dest);
}
