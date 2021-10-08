#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);

	if(srclen + 1 <= dstsize)
		ft_memcpy(dst, src, srclen + 1);
	else if(dstsize)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (srclen);
}
