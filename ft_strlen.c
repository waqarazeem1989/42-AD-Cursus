
int main()
{
	char test[]="waqar azeem";
	printf("string length is = %")/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:48:29 by waqar             #+#    #+#             */
/*   Updated: 2022/04/02 11:04:13 by waqar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	int i;
	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return(i);
	}

