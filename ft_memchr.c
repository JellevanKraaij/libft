#include "libft.h"

char	*ft_memchr(const char *s, int c, size_t n)
{
	c = (unsigned char)c;
	while (n)
	{
		if (*s == c)
			return ((char *)s);
		s++;
		n--;
	}
	return (NULL);
}
