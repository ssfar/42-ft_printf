/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:41:11 by ssfar             #+#    #+#             */
/*   Updated: 2019/07/15 18:52:50 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utoa_base(size_t unb, char *base)
{
	char		tmp[68];
	int_fast8_t	i;
	int_fast8_t base_len;

	if (base)
		base_len = ft_strlen(base);
	if (!base || base_len < 2)
		return (NULL);
	i = 67;
	tmp[i] = '\0';
	if (unb == 0)
		tmp[--i] = '0';
	while (unb != 0)
	{
		tmp[--i] = base[unb % base_len];
		unb /= base_len;
	}
	return (ft_strdup(&tmp[i]));
}
