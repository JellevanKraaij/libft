#include "libft.h"

void *ft_reallocf(void *old, size_t oldsize, size_t newsize)
{
	void *ret;
	
	ret = malloc(newsize);
	if(ret == NULL)
	{
		free(old);
		return (NULL);
	}
	ft_memcpy(ret, old, oldsize);
	free(old);
	return (ret);
}