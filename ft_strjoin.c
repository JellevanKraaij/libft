#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*ret;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	ret = malloc(s1len + s2len + 1);
	if (ret == NULL)
		return (NULL);
	ft_memcpy(ret, s1, s1len);
	ft_memcpy(ret + s1len, s2, s2len + 1);
	return (ret);
}
