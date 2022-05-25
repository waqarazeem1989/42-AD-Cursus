/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 09:03:59 by waqar             #+#    #+#             */
/*   Updated: 2022/05/14 09:48:45 by waqar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: compare strings (size-bounded)
**
** DESCRIPTION:
** 		The strcmp() and strncmp() functions lexicographically compare the null-
**	terminated strings s1 and s2.
** 		The strncmp() function compares not more than n characters.  Because
**	strncmp() is designed for comparing strings rather than binary data,
**	characters that appear after a `\0' character are not compared.
*/

#include "libft.h"

int ft_strncmp(const char *s1,const char *s2, size_t n)
{
	int i;

	i=0;

	if (n==0)
	{
		return(0);
	}
	while (s1[i] && s2[i] && s1[i] == s2[i] && n>1)
	{
		i++;
		n--;
	}
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}