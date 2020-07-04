/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upower.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 18:21:30 by ssfar             #+#    #+#             */
/*   Updated: 2019/07/18 18:08:45 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_upower(size_t nb, uint_fast8_t pow)
{
	size_t	result;

	if (pow == 0)
		return (1);
	result = nb;
	while (pow-- != 1)
		result *= nb;
	return (result);
}

size_t	ft_fpower(long double nb, long double pow)
{
	size_t	result;

	if (pow == 0)
		return (1);
	result = nb;
	while (pow-- != 1)
		result *= nb;
	return (result);
}
