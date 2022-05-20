/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 10:30:57 by waqar             #+#    #+#             */
/*   Updated: 2022/05/19 18:41:00 by moazeem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	int i;

	i= 0;

	while (i < n)
	{
		if(((unsigned char*)s[i]) == (unsigned char)c)
		{
			return(void *)s[i];
		}
		i++;
	}
}
