/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:01:45 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 16:03:47 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint_fast8_t	ft_str_is_alpha(char *str)
{
	uint_fast8_t	alpha;

	if (!str)
		return (0);
	alpha = ft_isalpha(*str++);
	while (ft_isalpha(*str))
		str++;
	return (*str == '\0' && alpha);
}
