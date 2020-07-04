/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:28:37 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 16:03:56 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint_fast8_t	ft_str_is_lowercase(char *str)
{
	uint_fast8_t	lower_case;

	if (!str)
		return (0);
	lower_case = ft_islower(*str++);
	while (ft_islower(*str))
		str++;
	return (*str == '\0' && lower_case);
}
