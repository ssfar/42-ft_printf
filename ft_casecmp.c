/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_casecmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 17:24:28 by ssfar             #+#    #+#             */
/*   Updated: 2019/08/05 15:50:47 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int_fast16_t	ft_casecmp(int_fast8_t a, int_fast8_t b)
{
	if (ft_isupper(a) && ft_islower(b))
		return ((uint8_t)a - (uint8_t)b + 32);
	if (ft_islower(a) && ft_isupper(b))
		return ((uint8_t)a - (uint8_t)b - 32);
	return ((uint8_t)a - (uint8_t)b);
}
