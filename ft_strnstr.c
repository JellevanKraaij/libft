#include "libft.h"

static int	ft_strnmatch(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);
	if (!len)
		return (NULL);
	while (*haystack && len)
	{
		if (ft_strnmatch(haystack, needle, len))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}

static int	ft_strnmatch(const char *s1, const char *s2, size_t n)
{
	while (*s2)
	{
		if (*s1 != *s2 || !n)
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (1);
}
