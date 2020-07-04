/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:41:38 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 15:54:02 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int_fast16_t	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (s1 && s2)
	{
		i = 0;
		while (i < n)
		{
			if (((uint8_t*)s1)[i] != ((uint8_t*)s2)[i])
				return (((uint8_t*)s1)[i] - ((uint8_t*)s2)[i]);
			i++;
		}
	}
	return (0);
}
