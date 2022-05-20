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

//appinha
#include "libft.h"

int ft_strncmp(char s1, char s2, size_t n)
{
	size_t	i;

	if (n==0)
	{
		return(0);
	}
	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
	i	if (i < (n)) //  \0 not included in count of n, hence n and not (n-1)
		{
			i++;
		}
		else
		{
			return(0);
		}
	}
			return((unsigned char)s1[i] - (unsigned char) s2[i]);
}
