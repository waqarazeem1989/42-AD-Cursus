/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:27:28 by waqar             #+#    #+#             */
/*   Updated: 2022/05/22 18:28:01 by waqar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*result;

	while (*s1 && ft_strchr(set, *s1) != 0) // ft_strchr - locate (*s1) character in string (set) (first occurrence)
		s1++;
	len = ft_strlen(s1);
	while (len && s1[len - 1] && ft_strchr(set, s1[len - 1]) != 0)
		len--;
	if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	ft_memcpy(result, s1, len);
	result[len] = '\0';
	return (result);
}

/*
** LIBRARY: N/A
** SYNOPSIS: trim beginning and end of string with the specified characters
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a copy of ’s1’ with the
**	characters specified in ’set’ removed from the beginning and the end of the
**	string. 
*/

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate character in string (first occurrence)
** PROTOTYPE: char	*ft_strchr(const char *s, int c)
** DESCRIPTION:
** 		The strchr() function locates the first occurrence of c (converted to a
**	char) in the string pointed to by s.  The terminating null character is
**	considered to be part of the string; therefore if c is `\0', the func-
**	tions locate the terminating `\0'.
*/

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy memory area
** PROTOTYPE: void	*ft_memcpy(void *dst, const void *src, size_t n)
** DESCRIPTION:
** 		The memcpy() function copies n bytes from memory area s2 to memory area
**	s1.  If s1 and s2 overlap, behavior is undefined.  Applications in which
**	s1 and s2 might overlap should use memmove(3) instead.
*/