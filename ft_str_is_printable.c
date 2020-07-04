/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:33:15 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 16:04:05 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint_fast8_t	ft_str_is_printable(char *str)
{
	uint_fast8_t	printable;

	if (!str)
		return (0);
	printable = ft_isprint(*str++);
	while (ft_isprint(*str))
		str++;
	return (*str == '\0' && printable);
}
