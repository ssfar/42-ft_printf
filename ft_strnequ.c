/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 18:10:46 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 15:37:31 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint_fast8_t	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 && !s2)
		return (0);
	else if (!s1 || !s2)
		return (1);
	while (*s1 && *s2 && n)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		n--;
	}
	return ((*s1 || *s2) && n ? 0 : 1);
}
