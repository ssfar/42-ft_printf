/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:03:01 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/18 20:12:10 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (s1 && s2)
	{
		i = 0;
		while (s1[i])
			i++;
		while (*s2 && n > 0)
		{
			s1[i++] = *s2++;
			n--;
		}
		s1[i] = '\0';
	}
	return (s1);
}