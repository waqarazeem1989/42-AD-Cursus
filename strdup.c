/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:51:27 by waqar             #+#    #+#             */
/*   Updated: 2022/05/16 12:12:25 by waqar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// JeaSeoKim
//
#include "libft.h"

/*
** ft_strdup - duplicate a string
*/

char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*result;

	slen = ft_strlen(s);
	if (!(result = (char *)malloc(sizeof(char) * (slen + 1))))
		return (0);
	slen = 0; //slen reset to value zero
	while (s[slen]) // similar to while slen != '\0'
	{
		result[slen] = s[slen];
		slen++;
	}
	result[slen] = '\0';
	return (result);
}
