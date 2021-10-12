#include "libft.h"
#include <stdio.h>

static void	ft_split_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static size_t	ft_split_count(char const *s, char c)
{
	size_t	str_cnt;
	size_t	tmp;

	str_cnt = 0;
	while (*s)
	{
		tmp = ft_findchr(s, c);
		s += tmp;
		if (tmp > 0)
			str_cnt++;
		else
			s++;
	}
	return (str_cnt);
}

static char	**ft_split_build(char const *s, char c, char **ret)
{
	size_t	str_cnt;
	size_t	tmp;

	str_cnt = 0;
	while (*s)
	{
		tmp = ft_findchr(s, c);
		if (tmp > 0)
		{
			ret[str_cnt] = ft_substr(s, 0, tmp);
			if (ret[str_cnt] == NULL)
				return (NULL);
			str_cnt++;
			s += tmp;
		}
		else
			s++;
	}
	ret[str_cnt] = NULL;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;

	ret = (char **)malloc((ft_split_count(s, c) + 1) * sizeof(char *));
	if (ret == NULL)
		return (NULL);
	ret = ft_split_build(s, c, ret);
	if (ret == NULL)
		ft_split_free(ret);
	return (ret);
}
