#include "libft.h"

static void	*ft_memcpy_rev(void *dst, const void *src, unsigned long n)
{
	unsigned char	*cdst;
	const unsigned char	*csrc;

	cdst = dst;
	csrc = src;
	while (n > 0)
	{
		n--;
		cdst[n] = csrc[n];
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, unsigned long len)
{
	if(dst < src)
		ft_memcpy(dst, src, len);
	else
		ft_memcpy_rev(dst, src, len);
	return (dst);
}
