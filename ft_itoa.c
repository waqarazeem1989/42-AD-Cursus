/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:28:32 by waqar             #+#    #+#             */
/*   Updated: 2022/05/24 21:28:33 by waqar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** convert integer to ASCII string
*/

#include "libft.h"

char	*ft_itoa(int n)
{
	long	number;
	size_t	len;
	char	*str;

	number = n;
	len = (number > 0) ? 0 : 1;
	number = (number > 0) ? number : -number;
	while (n)
		n = len++ ? n / 10 : n / 10;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	*(str + len--) = '\0';
	while (number > 0)
	{
		*(str + len--) = number % 10 + '0';
		number /= 10;
	}
	if (len == 0 && str[1] == '\0')
		*(str + len) = '0';
	if (len == 0 && str[1] != '\0')
		*(str + len) = '-';
	return (str);
}