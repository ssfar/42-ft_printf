/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 18:53:12 by ssfar             #+#    #+#             */
/*   Updated: 2019/07/15 18:54:21 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utoa(size_t unb)
{
	char			*str;
	uint_fast8_t	len;

	len = ft_uintlen(unb);
	if (!(str = malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	str[len--] = '\0';
	if (unb == 0)
		str[0] = '0';
	while (unb != 0)
	{
		str[len--] = unb % 10 + '0';
		unb /= 10;
	}
	return (str);
}
