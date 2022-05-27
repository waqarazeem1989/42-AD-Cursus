/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:27:36 by waqar             #+#    #+#             */
/*   Updated: 2022/05/25 18:27:45 by waqar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: delete element from list
**
** DESCRIPTION:
** 		Takes as a parameter an element and frees the memory of the element’s
**	content using the function ’del’ given as a parameter and free the element.
**	The memory of ’next’ must not be freed.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content); // value of lst deleted
	free(lst); // memory allocation to value of lst freed
}
