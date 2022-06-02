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

static int	num_len(int num)
{
	int	i;

	if (num < 0)
		i = 1;
	else if (num == 0)
		return (1);
	else
		i = 0;
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int num)
{
	char		*s;
	int			len;
	long int	numb;

	numb = num;
	len = num_len (num);
	if (len == 1 && num == 0)
		return (ft_strdup ("0"));
	else
		s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (0);
	s[len--] = '\0';
	if (numb < 0)
	{
		s[0] = '-';
		numb = -numb;
	}
	while (numb)
	{
		s[len--] = numb % 10 + '0';
		numb /= 10;
	}
	return (s);
}

// int main()
// {
// 	char *a;
// 	a = ft_itoa(0);
// 	printf( "string %s \n", a);

// return (0);
// }