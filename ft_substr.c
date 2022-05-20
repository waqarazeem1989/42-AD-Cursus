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

// appinha
//
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	j;

	if (!s || !(new_str = (char *)malloc(len + 1)))
		return (0);
	j = 0;
	while (start < ft_strlen(s) && j < len)
		new_str[j++] = s[start++];
	new_str[j] = '\0';
	return (new_str);
}
