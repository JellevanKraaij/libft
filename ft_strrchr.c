/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-kra <jvan-kra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:45:02 by jvan-kra          #+#    #+#             */
/*   Updated: 2021/10/19 15:45:02 by jvan-kra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
