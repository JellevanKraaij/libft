#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	c = (unsigned char)c;
	while (n)
	{
		if (*(unsigned char *)s == c)
			return ((char *)s);
		s++;
		n--;
	}
	return (NULL);
}
