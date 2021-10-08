#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *cb;

	cb = b;
	while(len)
	{
		*cb = c;
		len--;
		cb++;
	}
	return(b);
}
