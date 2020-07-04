/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 19:13:58 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 16:02:15 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint_fast8_t	ft_ischarset(int_fast8_t c, char *charset)
{
	uint_fast8_t	same;

	same = 0;
	if (charset)
		while (*charset)
			if (c == *charset++)
				same = 1;
	return (same);
}
