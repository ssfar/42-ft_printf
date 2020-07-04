/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:13:04 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 16:04:01 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint_fast8_t	ft_str_is_numeric(char *str)
{
	uint_fast8_t	numeric;

	if (!str)
		return (0);
	numeric = ft_isdigit(*str++);
	while (ft_isdigit(*str))
		str++;
	return (*str == '\0' && numeric);
}
