/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_charset.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 19:13:58 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/18 20:47:21 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint_fast8_t	ft_str_is_charset(char *str, char *charset)
{
	if (str && charset)
	{
		while (*str && ft_ischarset(*str, charset))
			str++;
		if (*str == '\0')
			return (1);
	}
	if (str || charset)
		return (0);
	return (1);
}
