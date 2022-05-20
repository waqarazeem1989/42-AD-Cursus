/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 10:06:51 by waqar             #+#    #+#             */
/*   Updated: 2022/05/14 10:27:28 by waqar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//appinha
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i=0;

	while(i < len)
	{
		((unsigned char *)b)[i] = c; // typecast to convert b to unsgined char
		i++;
	}
	return(b);
}
