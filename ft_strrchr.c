#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ret;

	c = (unsigned char)c;
	if (c == 0)
		return (ft_strchr(s, c));
	ret = NULL;
	while (*s)
	{
		if (*s == c)
			ret = s;
		s++;
	}
	return ((char *)ret);
}
