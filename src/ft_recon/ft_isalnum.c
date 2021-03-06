/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:21:50 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 23:06:46 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recoded isalnum libc function: Checks if c is an alphanumeric character
**
** c: A character
**
** returns: A non-zero integer if c is an alphanumeric character
**          Zero value otherwise
*/

bool	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
