#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*new;

	if (lst == NULL)
		return (NULL);
	ret = ft_lstnew((*f)(lst->content));
	if (ret == NULL)
		return (NULL);
	new = ret;
	lst = lst->next;
	while (lst)
	{
		new->next = ft_lstnew((*f)(lst->content));
		if (new->next == NULL)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	return (ret);
}
