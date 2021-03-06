/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiterif.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 21:40:44 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 22:23:36 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function: Iterates the list lst and applies the function f to the content of
** elements that are "equal" to the reference information
**
** lst: The address of a pointer to a element
** f: The address of the function to iterate on the list
** data_ref: The data to be compared to the content
*/

void		ft_lstiterif(t_list *lst, void (*f)(void *), void *data_ref)
{
	if (!lst || !f || !data_ref)
		return ;
	while (lst)
	{
		if (lst->content == data_ref)
			f(lst->content);
		lst = lst->next;
	}
}
