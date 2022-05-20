/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:41:03 by waqar             #+#    #+#             */
/*   Updated: 2022/05/15 11:14:03 by waqar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//appinha
#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n);
{
	size_t i;
	i=0;

	while ( i < n)
	{
		if (((unsigned char*)s1[i]) != ((unsigned char*)s2[i]))
		{
			return(((unsigned char*)s1[i]) - ((unsigned char*)s2[i]))
		}
		i++;
	}
	return(0);
}
