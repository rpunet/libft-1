/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoindelone.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:40:12 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/10 23:09:49 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function: Allocates a new string, result of the concatenation of s1 and s2,
** frees the first pointer if it exists
**
** s1: A pointer to the first string to be copied
** s2: A pointer to the second string to be copied
**
** returns: The new string
**          NULL otherwise
*/

char		*ft_strjoindelone(char *s1, char *s2)
{
	char	*result;
	size_t	len_s1;
	size_t	len_s2;
	size_t	len;

	len_s1 = 0;
	len_s2 = ft_strlen(s2);
	if (s1)
		len_s1 = ft_strlen(s1);
	len = len_s1 + len_s2;
	result = ft_strnew(len);
	if (!result)
		return (NULL);
	if (s1)
	{
		ft_strlcpy(result, s1, (len_s1 + 1));
		ft_strdel(&s1);
	}
	ft_strlcpy(result + len_s1, s2, (len_s2 + 1));
	return (result);
}
