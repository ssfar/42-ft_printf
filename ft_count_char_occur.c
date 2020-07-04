/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char_occur.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <ssfar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 17:49:02 by ssfar             #+#    #+#             */
/*   Updated: 2019/06/21 13:28:41 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_char_occur(char *str, int_fast8_t c)
{
	size_t	occur;

	occur = 0;
	if (str)
		while (*str)
			if (*str++ == c)
				occur++;
	return (occur);
}
