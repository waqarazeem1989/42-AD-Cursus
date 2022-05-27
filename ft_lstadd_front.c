/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:27:11 by waqar             #+#    #+#             */
/*   Updated: 2022/05/25 18:27:23 by waqar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Adds the element ’new’ at the beginning of the list.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst) // if there is no pointer list available THEN
	{
		*lst = new; // copy address of new to the first entry in list
		return ;
	}
	new->next = *lst; // copy the value of first address to the next element of variable new
	*lst = new; // copy address of new to the value of first node in list 
}
