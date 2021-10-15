#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	len = ft_strnlen(s + start, len) * (start < ft_strlen(s));
	ret = malloc(len + 1);
	if (ret != NULL)
		ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
