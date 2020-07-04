/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:32:22 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 16:04:11 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint_fast8_t	ft_str_is_uppercase(char *str)
{
	uint_fast8_t	upper_case;

	if (!str)
		return (0);
	upper_case = ft_isupper(*str++);
	while (ft_isupper(*str))
		str++;
	return (*str == '\0' && upper_case);
}
