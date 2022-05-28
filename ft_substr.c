/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:38:29 by waqar             #+#    #+#             */
/*   Updated: 2022/05/16 12:25:16 by waqar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: extract substring from string
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a substring from the string ’s’.
**	The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	j;

	if (!s)
		return (0);
	if ((size_t)ft_strlen(s) > len)
	{
		new_str = (char *)malloc(len + 1);
	}
	else
	{
		new_str = (char *)malloc(ft_strlen(s) + 1);
	}
	if (!new_str)
		return (0);
	j = 0;
	while (start < ft_strlen(s) && j < len)
		new_str[j++] = s[start++];
	new_str[j] = '\0';
	return (new_str);
}

// #include "libft.h"

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	char	*ptr;

// 	i = 0;
// 	if (!s)
// 		return (0);
// 	if (len > ft_strlen(s))
// 		len = ft_strlen(s) - start;
// 	if (start >= ft_strlen(s))
// 		return (ft_strdup(""));
// 	ptr = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!ptr)
// 		return (NULL);
// 	while (i < len)
// 	{
// 		ptr[i] = s[start];
// 		i++;
// 		start++;
// 	}
// 	ptr[i] = '\0';
// 	return (ptr);
// }
