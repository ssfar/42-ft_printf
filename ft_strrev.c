/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 20:47:37 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 14:58:35 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int_fast8_t	cache;
	int			end;
	int			i;

	if (str)
	{
		end = ft_strlen(str) - 1;
		i = 0;
		while (i < end)
		{
			cache = str[i];
			str[i++] = str[end];
			str[end--] = cache;
		}
	}
	return (str);
}
