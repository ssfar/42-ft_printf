/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_no_symbol.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:56:28 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 16:18:07 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_no_symbol(ssize_t nb)
{
	char			*str;
	uint_fast8_t	len;

	len = ft_intlen_no_symbol(nb);
	if (!(str = malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	str[len--] = '\0';
	if (nb == 0)
		str[0] = '0';
	else if (nb > 0)
		while (nb != 0)
		{
			str[len--] = nb % 10 + '0';
			nb /= 10;
		}
	else
		while (nb != 0)
		{
			str[len--] = -(nb % 10) + '0';
			nb /= 10;
		}
	return (str);
}
