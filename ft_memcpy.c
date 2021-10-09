#include "libft.h"

// ft_memmove depends on specific funtion behavior
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*cdst;
	const unsigned char	*csrc;

	cdst = dst;
	csrc = src;
	while (n > 0)
	{
		*cdst = *csrc;
		cdst++;
		csrc++;
		n--;
	}
	return (dst);
}
