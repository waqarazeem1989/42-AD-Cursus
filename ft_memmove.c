/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 11:13:09 by waqar             #+#    #+#             */
/*   Updated: 2022/05/19 18:32:33 by moazeem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	if (!dst && !!src) // should it be || or &&
	{
		return(0);
	}
	i = 0;
	
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}

	else 
	{
		while(i < len)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			i++;	
		}
	}
	return (dst);
}
