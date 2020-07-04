/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:43:18 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/22 14:25:07 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int_fast8_t c)
{
	char		*pos;
	int_fast8_t	found;

	if (s)
	{
		found = 0;
		while (*s)
		{
			if (*s == c)
			{
				pos = (char*)s;
				found = 1;
			}
			s++;
		}
		if (*s == c)
			pos = (char*)s;
		if (found || *s == c)
			return ((char*)pos);
	}
	return (NULL);
}
