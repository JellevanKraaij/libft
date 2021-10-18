#include "libft.h"

static void	*ft_memcpy_rev(void *dst, const void *src, size_t n)
{
	unsigned char		*cdst;
	const unsigned char	*csrc;

	if (dst == NULL && src == NULL)
		return (NULL);
	cdst = dst;
	csrc = src;
	while (n > 0)
	{
		n--;
		cdst[n] = csrc[n];
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
		ft_memcpy_rev(dst, src, len);
	return (dst);
}
