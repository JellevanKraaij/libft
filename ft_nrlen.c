/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nrlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvan-kra <jvan-kra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:44:15 by jvan-kra          #+#    #+#             */
/*   Updated: 2021/10/19 15:44:15 by jvan-kra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_nrlen(long input)
{
	int	length;

	length = 0;
	if (input == 0)
		return (1);
	if (input < 0)
	{
		length++;
		input *= -1;
	}
	while (input)
	{
		input /= 10;
		length++;
	}
	return (length);
}
