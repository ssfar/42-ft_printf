/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_va_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 18:20:45 by ssfar             #+#    #+#             */
/*   Updated: 2019/08/03 19:26:15 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_get_va_int(va_list arg, uint_fast8_t bits, uint_fast8_t z)
{
	if (z)
		return ((ssize_t)va_arg(arg, ssize_t));
	else if (bits == 32)
		return ((int32_t)va_arg(arg, ssize_t));
	else if (bits == 64)
		return ((int64_t)va_arg(arg, ssize_t));
	else if (bits == 8)
		return ((int8_t)va_arg(arg, ssize_t));
	else
		return ((int16_t)va_arg(arg, ssize_t));
}
