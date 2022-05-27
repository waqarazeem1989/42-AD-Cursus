/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:29:11 by waqar             #+#    #+#             */
/*   Updated: 2022/05/25 18:29:19 by waqar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: apply function to content of all list's elements into new list
**
** DESCRIPTION:
** 		Iterates the list ’lst’ and applies the function ’f’ to the content of
**	each element. Creates a new list resulting of the successive applications of
**	the function ’f’. The ’del’ function is used to delete the content of an
**	element if needed.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	first = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}