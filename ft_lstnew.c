#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ret;
	ret = malloc(sizeof(t_list));
	if (ret)
	{
		ret->content = content;
		ret->next = NULL;
	}
	return (ret);
}
