/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 11:23:32 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 15:54:43 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int_fast8_t c, size_t n)
{
	size_t	i;

	if (dst && src)
	{
		i = 0;
		while (i < n)
		{
			((uint8_t*)dst)[i] = ((uint8_t*)src)[i];
			if (((uint8_t*)src)[i++] == (uint8_t)c)
				return (dst + i);
		}
	}
	return (NULL);
}
