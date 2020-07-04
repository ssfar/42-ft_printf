/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strn_is_charset.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 22:59:59 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 14:29:35 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint_fast8_t	ft_strn_is_charset(char *str, char *charset, size_t n)
{
	if (str && charset)
	{
		while (*str && ft_ischarset(*str, charset) && n != 0)
		{
			str++;
			n--;
		}
		if (*str == '\0' || n == 0)
			return (1);
	}
	if (str || charset)
		return (0);
	return (1);
}
