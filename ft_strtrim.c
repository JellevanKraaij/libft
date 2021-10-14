#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	start = 0;
	len = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (len && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, start, len - start + 1));
}
