/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-kra <jvan-kra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:57:28 by jvan-kra          #+#    #+#             */
/*   Updated: 2021/10/20 14:58:18 by jvan-kra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*dest;
	size_t	len;

	len = ft_strnlen(src, n);
	dest = malloc(len + 1);
	if (dest != NULL)
		ft_memcpy(dest, src, len + 1);
	return (dest);
}
