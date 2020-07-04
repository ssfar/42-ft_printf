/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aproximative_ftoa_no_symbol.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 18:31:55 by ssfar             #+#    #+#             */
/*   Updated: 2019/07/20 18:40:20 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_aproximative_ftoa_no_symbol(long double fnb, uint_fast8_t precision,
	uint_fast8_t sharp)
{
	size_t			integer;
	char			*mantissa;
	char			*str;

	if (fnb < 0)
		fnb = -fnb;
	integer = fnb;
	mantissa = ft_get_float_mantissa(fnb, precision);
	fnb *= ft_upower(10, precision + 1);
	if (!mantissa && (int)fnb % 10 >= 5)
		integer++;
	else if (mantissa && (int)fnb % 10 >= 5)
		ft_round_float(&integer, mantissa);
	if (!mantissa && !sharp)
		return (ft_itoa_no_symbol(integer));
	str = ft_strjoin_free(ft_itoa_no_symbol(integer), ".", 1);
	if (mantissa)
		return (ft_strjoin_free(str, mantissa, 3));
	return (str);
}
