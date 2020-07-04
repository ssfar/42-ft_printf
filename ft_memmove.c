/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 11:11:49 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 15:53:38 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst && src && dst != src)
	{
		i = 0;
		while (len)
		{
			len--;
			if (dst < src)
				((uint8_t*)dst)[i] = ((uint8_t*)src)[i];
			else if (dst > src)
				((uint8_t*)dst)[len] = ((uint8_t*)src)[len];
			i++;
		}
	}
	return (dst);
}
